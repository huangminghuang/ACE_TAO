#!/usr/bin/env python
import weakref
import os, sys, re, glob
import glob2, collections
import argparse
import operator
import textwrap
from collections import OrderedDict
import dds_mpb
from ace_mpb import *
from source_group import *

override_cmakefiles = False
project_directory = ""
root = None
package = ""
requires_dict = {
  'BZIP2' : 'BZIP2_FOUND',
  'ZLIB' : 'ZLIB_FOUND',
  'LZO1' : 'LZO_FOUND'
}

file_dir = os.path.dirname(os.path.realpath(__file__))

cmake_file_preemble = '''
project({0} CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT {1})
  find_package({2} REQUIRED CONFIG)
endif()
'''
common_target_properties = ["output_name", "package", "compile_definitions", "requires", "folder", "aspects"]
common_exe_properties = common_target_properties + ["include_directories", "link_libraries"]
common_lib_properties = common_target_properties + ["define_symbol", "public_compile_definitions" ,"public_include_directories", "public_link_libraries"]

def enum(*sequential, **named):
  enums = dict(zip(sequential, range(len(sequential))), **named)
  reverse = dict((value, key) for key, value in enums.iteritems())
  enums['reverse_mapping'] = reverse
  return type('Enum', (), enums)

ProjectBase = enum('ACE', 'TAO', 'OpenDDS')

def string_in_files(str, files):
  for f in files:
    if str in open(f).read():
      return True
  return False




def flatten_list(lists):
  return [item for sublist in lists for item in sublist]

class IdlFileGroup:
  def __init__(self):
    self.idlflags_plus = []
    self.idlflags_minus= []
    self.files = []

class TypeSupportFileGroup:
  def __init__(self):
    self.dds_idl_flags = []
    self.files = []

class MPCNode(dds_mpb.Handler):
  patterns = {
    'exename': re.compile("exename\s*=\s*([^\s]+)"),
    'libname': re.compile("(shared|static)name\s*=\s*([^\s]+)"),
    'dynamicflags': re.compile("dynamicflags\s*\+=\s*(\w+)"),
    'after' : re.compile("after\s*\+=\s*(.+)$"),
    'libs' : re.compile("libs\s*\+=\s*(.+)$"),
    'idlflags' : re.compile("idlflags\s*\+=\s*(.+)$"),
    'idlflags_minus' : re.compile("idlflags\s*\-=\s*(.+)$"),
    'dcps_ts_flags' : re.compile("dcps_ts_flags\s*\+=\s*(.+)$"),
    'requires' : re.compile("requires\s*\+=\s*(.+)$"),
    'avoids' : re.compile("avoids\s*\+=\s*(.+)$"),
    'pch_header' : re.compile("pch_header\s*=\s*(.*)$"),
    'pch_source' : re.compile("pch_source\s*=\s*(.*)$"),
    'includes' : re.compile("includes\s*\+=\s*(.*)$"),
    'custom_only' : re.compile("custom_only\s*=\s*1$"),
    'macros' : re.compile("macros\s*\+=\s*(.*)$")
  }


  def __init__(self, content):
    self.content = content
    self.children = []

  def add_child(self, node):
    self.children.append(node)
    node.parent = weakref.ref(self)

  def expand_target_name(self, target_name):
    names = target_name.split('*')
    if len(names) == 2:
      names[1] = names[1].capitalize()
    result = ("_" + self.parent().prefix + "_").join(names)

    if target_name.startswith('*'):
      result=result[1:]
    if target_name.endswith('*'):
      result=result[0:-1]
    return result

  def add_lib(self, libname):
    if libname.startswith(package+"_"):
      self.internal_libs.add(libname)
    else:
      self.external_libs.add(libname)

  def dir(self):
    return self.parent().dir

  def normalize_mpc_project(self):
    project_pattern = re.compile("project\s*(\([^\)]*\))?\s*(:(.+))?")
    match = project_pattern.match(self.content)
    if match:
      self.after = []
      self.internal_libs = []
      self.sources = CXXSourceGroup()
      self.define_symbol= ""
      self.external_libs = set()
      self.dependents = []
      self.requires = set()
      self.skip_when_unavailable_libs = set()
      self.project_base = ProjectBase.ACE
      self.is_exe = False
      self.tao_idl_flags_minus = []
      self.idl_flags = []
      self.idl_files = []
      self.typesupports = []
      self.typesupport_groups = []
      self.tao_idl_flags = []
      self.dds_idl_flags = []
      self.internal_libs = set()
      self.includes = []
      self.custom_only = False
      self.generated_files = set()
      self.compile_definitions = set()
      self.is_face = False
      self.install_this_target =False
      self.idl_file_groups = []
      self.aspects = set()
      self.conditional_sources = {}
      self.subdirs = set()
      self.recursive_subdirs = set()
      self.install_only_files = []

      if root:
        self.folder = os.path.relpath(self.parent().dir, root)

      self.target_properties = []

      target_name, _, target_bases = match.groups()
      if target_name:
        ## remove the parenthesis around project name
        target_name = target_name[1:-1].strip()
        target_name = target_name.replace(" ", "_")
        self.name = self.expand_target_name(target_name)
      else:
        self.name = self.parent().prefix

      if target_bases != None:
        self.target_bases = [ dep.strip() for dep in target_bases.split(',')]
      else:
        self.target_bases = []

      self.parse_mpc_project_content()

      if not hasattr(self,'output_name'):
        self.output_name = self.name

      self.handle_mpc_project_bases()

    else:
      sys.stderr.write("%s doesnot match project_pattern\n"% self.content)
      exit(1)


  def handle_mpc_project_bases(self):
    ignore_set = set(['avoids_ace_for_tao',
                     'dds_macros',
                     'dcps_ts_defaults',
                     'taolib_with_idl',
                     'coverage_optional',
                     'taoidldefaults',
                     'face_idl_test_config',
                     'ace_lib', 'dcps', 'dcpslib', 'tao_output', 'taodefaults',
                     'corba_e_micro', 'corba_e_compact', 'minimum_corba', 'tao_no_iiop','optimize_collocated_invocations',
                     'pidl_install', 'pidl', 'ace_output'])


    for base in list(self.target_bases):
      handler = getattr(self, 'handle_mpb_'+ base, None)
      if handler:
        handler()
      elif base in ['dcps_tcp', 'dcps_udp', 'dcps_multicast', 'dcps_shmem', 'dcps_rtps_udp', 'dcps_rtps']:
        self.handle_mpb_dcps_transports(base)
      elif base not in ignore_set:
        sys.stderr.write("Warining: %s : the base project %s is not translated\n" % (self.name, base))

      if base.startswith('dcps') or base.startswith('opendds'):
        self.parent().project_base = max([ProjectBase.OpenDDS,self.parent().project_base])
        self.project_base = max([ProjectBase.OpenDDS,self.project_base])
        self.add_lib('OpenDDS_Dcps')

      elif base.startswith('tao') or base.startswith('orbsvcs'):
        self.parent().project_base = max([ProjectBase.TAO,self.parent().project_base])
        self.project_base = max([ProjectBase.TAO,self.project_base])

  def expand_file_list(self, list):

    result = []
    recurse = False
    for f in list:
      if '*' in f:
        result.extend([os.path.basename(x) for x in glob.glob(os.path.join(self.dir(), f))])
      elif f == "recurse = 1":
        recurse = True
      elif os.path.splitext(f)[1] == "":
        # this should be a directory
        if not recurse:
          self.subdirs.add(f)
        else:
          self.recursive_subdirs.add(f)
      else:
        result.append(f)
    return result

  def handle_idl_files(self, child):
    group = IdlFileGroup()

    for f in [ f.content for f in child.children ]:
      match =  MPCNode.patterns['idlflags'].match(f)
      if match:
        group.idlflags_plus += self.parse_idlflags(match)
        continue
      match = MPCNode.patterns['idlflags_minus'].match(f)
      if match:
        group.idlflags_minus += self.parse_idlflags(match)
        continue
      ## ignore every thing after ">>" which is only used by tao.mpc
      f = f.split(">>")[0].strip()
      target = self.parent().custom_only_target_contains_idl(f)
      if target:
        target.set_idl_target('targets', self)
      else:
        group.files.append(f)
    self.idl_file_groups.append(group)

  def handle_typesupports_files(self, child):
    group = TypeSupportFileGroup()

    for f in self.expand_file_list([ f.content for f in child.children ]):
      match =  MPCNode.patterns['dcps_ts_flags'].match(f)
      if match:
        group.dds_idl_flags += self.parse_idlflags(match)
        continue

      target = self.parent().custom_only_target_contains_idl(f)
      if target:
        target.set_idl_target('targets', self)
      else:
        group.files.append(f)
    self.typesupport_groups.append(group)

  def parse_mpc_project_content(self):

    for child in self.children:
      if re.match("source_files(\([^\)]+\))*",child.content.lower()):
        if not self.sources.source_files:
          self.sources.source_files = []
        self.sources.source_files += self.expand_file_list([ f.content for f in child.children ])
      elif child.content.lower() == "header_files":
        self.sources.header_files += self.expand_file_list([ f.content for f in child.children ])
      elif child.content.lower() == "inline_files":
        self.sources.inline_files += self.expand_file_list([ f.content for f in child.children ])
      elif child.content.lower() == "template_Files":
        self.sources.template_files += self.expand_file_list([ f.content for f in child.children ])
      elif child.content.lower() == 'typesupport_files':
        self.handle_typesupports_files(child)
      elif child.content.lower() == 'idl_files':
        self.handle_idl_files(child)
      elif child.content.lower() == 'pidlinstallwithoutbuilding_files':
        self.install_only_files = [ f.content for f in child.children ]
      elif child.content.lower() == 'pidl_files':
        pass
      elif child.content == "specific (vc9, vc10, vc11, vc12, vc14)":
        self.msvc = [ f.content for f in child.children ]
      elif child.content == 'specific':
        for x in child.children:
          if not x.content.startswith("install_dir"):
            print("Warning: In {0} ({1}): {2} is not translated".format( self.parent().path, self.name, x.content ) )
      elif child.content.lower() == 'documentation_Files':
        pass
      elif child.content.lower() == 'pkgconfig_files':
        pass
      elif child.content.lower() == 'installdata_files':
        pass
      elif child.content == 'verbatim(gnuace, postinstall)':
        pass
      elif child.content == 'specific (prop:microsoft)':
        for x in [ f.content for f in child.children ]:
          m = re.match('lit_libs\s*\+=\s*(.*)$', x)
          if m:
            self.external_libs.add("$<$<PLATFORM_ID:Windows>:{}>".format(m.group(1)))

      else:
        for name, value in MPCNode.patterns.iteritems():
          match = value.match(child.content)
          if match:
            method = getattr(self, "handle_" + name + "_pattern")
            method(match)
            break
        if not match:
          ignored_content_prefixes = ["libpaths ", "exeout", "libout", "dynamicflags" ]
          if not any([child.content.startswith(prefix) for prefix in ignored_content_prefixes]):
            print("Warning: In {0} ({1}): {2} is not translated".format( self.parent().path, self.name, child.content ) )

    self.post_process_idl_files()

  def post_process_idl_files(self):
    self.targets = set()
    self.skel_targets = set()
    self.stub_targets = set()
    self.anyop_targets = set()
    if self.custom_only:
      self.parent().add_custom_only_target(self)


  def set_idl_target(self, target_type, target):
    self.__dict__[target_type].add(target.name)


  def resolve_dependent_idls(self, project):

    if self.custom_only:
      return
    # parse the list of source files and return the list of files which are generated by idl compiler and the list corresponding idl files

    # the key of idls is the idl filename, type value contains the set of associated skel file in the source files list
    idls = {}
    if self.sources.source_files:
      for file in self.sources.source_files:
        if file.endswith("C.cpp") or file.endswith("S.cpp") or file.endswith("A.cpp"):
          idls.setdefault(file[0:-5], set()).add(file)

    ignore_files_in_tao = set([
      'InterfaceDef',
      'InvalidName',
      'Object_Key',
      'Typecode_types',
      'WrongTransaction',
      'orb',
      'Muxed_TM',
      'Exclusive_TM',
      'TypeCode',
      'SystemException',
      'Exception',
      'PolicyFactory',
      'Regular_PO',
      'Root_PO',
      'PS_Forward'
    ])

    if len(idls):
      if self.name == "TAO_DynamicAny":
        print("sources = %s", self.sources.source_files)
      sources = set(self.sources.source_files)
      for idl_file_base, cpp_files in idls.iteritems():
        dep_target =  self.parent().custom_only_target_contains_idl(idl_file_base)
        if not dep_target and (self.name == 'AnyTypeCode' or self.name == 'PortableServer'):
          tao_target = project.find_target_by_output_name('TAO', self.path)
          dep_target = tao_target.parent().custom_only_target_contains_idl(idl_file_base)

        if dep_target:
          self.sources.remove_generated_files_for_idl(idl_file_base)
          self.includes += ["${CMAKE_CURRENT_SOURCE_DIR}", "${CMAKE_CURRENT_BINARY_DIR}"]

          if len(cpp_files) >=2:
            dep_target.set_idl_target('targets', self)
          else:
            f = cpp_files.pop()
            if f.endswith("C.cpp"):
              dep_target.set_idl_target('stub_targets', self)
            elif f.endswith("S.cpp"):
              dep_target.set_idl_target('skel_targets', self)
            elif f.endswith("A.cpp"):
              dep_target.set_idl_target('anyop_targets', self)
        elif not (idl_file_base in ignore_files_in_tao):
            print("'{}.idl".format(idl_file_base))

  def all_idl_files(self):
    return flatten_list([ x.files for x in self.idl_file_groups]) + flatten_list([ x.files for x in self.typesupport_groups])

  def num_tao_idl_files(self):
    return sum([len(x.files) for x in self.idl_file_groups])

  def num_typesupport_files(self):
    return sum([len(x.files) for x in self.typesupport_groups])

  def handle_exename_pattern(self, match):
    if match.group(1) != "*":
      self.output_name = match.group(1)
    self.is_exe = True

  def handle_libname_pattern(self, match):
    if match.group(2) != "*":
      self.output_name = self.expand_target_name(match.group(2))

  def handle_dynamicflags_pattern(self, match):
    self.define_symbol = match.group(1)

  def handle_after_pattern(self, match):
    self.after += [self.expand_target_name(name) for name in match.group(1).split()]

  def handle_libs_pattern(self, match):
    libs = set([self.expand_target_name(lib) for lib in match.group(1).split()])
    if 'DDS_LargeSample_idl' in libs:
      libs.remove('DDS_LargeSample_idl')
      libs.add('DDS_LargeSample_Idl')

    self.internal_libs |= libs

  def parse_idlflags(self, match):
    flags = [f for f in match.group(1).split() if f != "-I$(DDS_ROOT)"]
    # replace every occurance of "$(ABC)" to "${ABC}"
    return [re.sub(r'\$\((\w+)\)', r'${\1}', flag) for flag in flags ]

  def handle_idlflags_pattern(self, match):
    self.tao_idl_flags += self.parse_idlflags(match)

  def handle_idlflags_minus_pattern(self, match):
    self.tao_idl_flags_minus += match.group(1).split()

  def handle_dcps_ts_flags_pattern(self, match):
    self.dds_idl_flags += match.group(1).split()
    # for flag in  match.group(1).split():
    #   if not (flag.startswith("-Wb,stub_export_include=") or flag.startswith("-Wb,export_include=") or  flag.startswith("-Wb,stub_export_macro=") or  flag.startswith("-Wb,export_macro=")):
    #     self.dds_idl_flags.append(flag)

  def handle_requires_pattern(self, match):
    ignores = set(['ssl','qos', 'tao_orbsvcs'])
    self.requires = self.requires.union(set([ x.upper() for x in match.group(1).split() if x not in ignores]))
    if match.group(1) == 'qos':
      self.external_libs.add('${RAPI_LIBRARIES}')
      self.requires.add('RAPI_FOUND')
      self.includes.append('${RAPI_INCLUDE_DIR}')

  def handle_avoids_pattern(self, match):
    ignores = set(['wince','ace_for_tao'])
    self.requires = self.requires.union([ '"NOT %s"' % x.upper() for x in match.group(1).split() if x not in ignores ])

  def handle_includes_pattern(self, match):
    self.includes.extend( [re.sub(r'\$\((\w+)\)', r'${\1}', path) for path in match.group(1).split() ])

  def handle_macros_pattern(self, match):
    self.compile_definitions |= set(match.group(1).split())

  def handle_pch_header_pattern(self, match):
    pass

  def handle_pch_source_pattern(self, match):
    pass

  def handle_custom_only_pattern(self,match):
    self.custom_only = True
    self.sources.source_files = []

  def set_path(self, path):
    self.path = path

  def resolve_libs(self, project):
    self.project = project
    my_deps = self.internal_libs
    if self.project_base == ProjectBase.ACE and self.name != 'ACE':
      my_deps.add('ACE')

    for lib in my_deps:
      if lib in project.internal_libs_index_by_output_name:
        self.depends_on(lib)
      else:
        if lib != package:
          sys.stderr.write("Warining: %s has an unresolved dependency on lib %s, treated as imported target\n" % (self.name, lib))
        self.external_libs.add(lib)

  def depends_on(self, lib):
    dependee = self.project.find_target_by_output_name(lib, self.path)
    self.external_libs.add(dependee.name)
    dependee.dependents.append(self)
    self.project.set_dependency(self, dependee)

  def format_idl_files_text(self):
    def combine_options(flags):
      ## attach the idl flag which doesn't start with "-" or "$" to the previous flag
      result = []
      for f in flags:
        if f.startswith('-') or f.startswith('$'):
          result.append(f)
        else:
          result[-1] += (" " + f)
      return result

    def format_idl_flags(flags):
      result = []
      line = ""
      for f in combine_options(flags):
        if len(line) == 0:
          line = f
        elif len(line) + 1 + len(f) < 30:
          line += " " + f
        else:
          result.append(line)
          line = f
      if len(line):
        result.append(line)
      return result

    if not self.custom_only:
      self.targets = [self.name]

    if self.is_face:
      self.aspects.add('FACE')

    result = ""

    if self.num_typesupport_files():
      ## if there's only one group, merge all ts flags into one
      if len(self.typesupport_groups)==1:
        self.typesupport_groups[0].dds_idl_flags = self.dds_idl_flags + self.typesupport_groups[0].dds_idl_flags
        self.dds_idl_flags = []

      self.aspects = self.aspects & set(["FACE"])

      common_ts_flags = []
      if len(self.dds_idl_flags):
        result = "set({}_TS_FLAGS {})\n".format(self.name, ("\n" + (" " * (len(self.name) + 14))).join(format_idl_flags(self.dds_idl_flags)))
        common_ts_flags = ["${%s_TS_FLAGS}"%(self.name)]

      for group in self.typesupport_groups:
        self.dds_idl_flags = format_idl_flags(common_ts_flags + group.dds_idl_flags)
        self.idl_files = group.files
        properties_text = format_target_properties_in_list(self,[ "targets", "aspects", "dds_idl_flags", "tao_idl_flags", "idl_files" ])
        result += "dds_idl_sources(\n{0})\n\n".format(properties_text)
    elif self.num_tao_idl_files():
      all_idlflags_minus = self.tao_idl_flags_minus + flatten_list([g.idlflags_minus for g in self.idl_file_groups])
      all_idlflags_plus =  list_difference(self.tao_idl_flags, all_idlflags_minus)

      for group in self.idl_file_groups:
        group.idlflags_plus = list_difference(all_idlflags_minus, self.tao_idl_flags_minus + group.idlflags_minus) + group.idlflags_plus

      if len(self.idl_file_groups)==1 and len(all_idlflags_plus):
        self.idl_file_groups[0].idlflags_plus = all_idlflags_plus + self.idl_file_groups[0].idlflags_plus
        all_idlflags_plus = []

      self.aspects = self.aspects & set(["AMI", "AMH"])

      common_flags = []
      if len(all_idlflags_plus):
        result = "set({}_FLAGS {})\n".format(self.name, ("\n" + (" " * (len(self.name) + 11))).join(format_idl_flags(all_idlflags_plus)))
        common_flags = ["${%s_FLAGS}"%(self.name)]

      if (len(self.targets) + len(self.skel_targets) + len(self.anyop_targets)) ==0:
        self.targets = self.stub_targets
        self.stub_targets = []

      for group in self.idl_file_groups:
        self.idl_flags = format_idl_flags(common_flags + group.idlflags_plus)
        self.idl_files = group.files

        result += "tao_idl_sources(\n{0})\n\n".format(format_target_properties_in_list(self,[ "targets", "stub_targets", "skel_targets", "anyop_targets", "aspects" ,"idl_flags", "idl_files" ]))
      self.idl_files = []

    return result



  def remove_generated_files_from_sources(self):
    if self.project_base >= ProjectBase.TAO:
      for idl_file in self.all_idl_files():
        self.sources.remove_generated_files_for_idl(idl_file)


  def generate_subdir_cmake(self, subdir):
    abs_subdir = os.path.join(self.parent().dir, subdir)
    group = CXXSourceGroup()
    group.glob(abs_subdir)
    with open(os.path.join(abs_subdir, 'CMakeLists.txt'), 'w') as f:
      f.write(group.cmake_text(self, subdir=subdir))
    return 'include("%s/CMakeLists.txt")\n' % subdir

  def generate_recursive_subdir_cmake(self, subdir):
    result = ""
    abs_subdir = os.path.join(self.parent().dir, subdir)
    for dirname, subdirlist, files in os.walk(abs_subdir):
      group = CXXSourceGroup()
      group.glob(dirname)
      with open(os.path.join(dirname, 'CMakeLists.txt'), 'w') as f:
        dir = subdir + dirname[len(abs_subdir):]
        f.write(group.cmake_text(self, subdir=dir))
        result += 'include("%s/CMakeLists.txt")\n' % dir
    return result

  def cmake_text(self):

    if 'TAO' in self.aspects:
      self.internal_libs.discard('TAO')

    result = ""

    self.include_directories = []
    if self.name == 'TAO':
      print("TAO.includes = {}".format( self.includes ))
    for dir in list(OrderedDict.fromkeys(self.includes)):
      if dir.startswith('..'):
        self.include_directories.append("${CMAKE_CURRENT_SOURCE_DIR}/"+dir)
        if self.project_base >= ProjectBase.TAO:
          self.include_directories.append("${CMAKE_CURRENT_BINARY_DIR}/"+dir)
      else:
        self.include_directories.append(dir)

    self.remove_generated_files_from_sources()

    num_opendds_libs = sum(1 for lib in self.external_libs if  lib.startswith('OpenDDS'))
    if num_opendds_libs > 1:
      self.external_libs.discard('OpenDDS_Dcps')
    if num_opendds_libs  > 0:
      self.external_libs.discard('TAO')
      self.external_libs.discard('ACE')

    num_tao_libs = sum(1 for lib in self.external_libs if  lib.startswith('TAO'))
    if num_tao_libs > 1:
      self.external_libs.discard('TAO')
    if num_tao_libs > 0:
      self.external_libs.discard('ACE')


    if package and self.install_this_target:
      self.package = package

    try:
      with open(os.path.join(file_dir, self.name +  "_pretext.txt")) as f:
        result = f.read() + "\n"
    except:
      pass

    if self.is_exe:
      self.link_libraries = self.external_libs
      result +=  "ace_add_exe(%s\n" %  (self.name) + format_target_properties_in_list(self,common_exe_properties)+ ")\n"
    elif not self.custom_only:
      self.public_link_libraries = self.external_libs
      self.public_include_directories = self.include_directories
      if self.install_this_target:
        self.public_include_directories = [ "$<BUILD_INTERFACE:%s>" % x if x.startswith('${CMAKE_CURRENT') else x for x in self.public_include_directories ]
      result += "ace_add_lib(%s\n" %  (self.name) + format_target_properties_in_list(self,common_lib_properties)+ ")\n"

    result += self.sources.cmake_text(self, None)

    for cond, sources in self.conditional_sources.iteritems():
      result += sources.cmake_text(self, cond)

    for subdir in self.subdirs:
      result += self.generate_subdir_cmake(subdir)

    for subdir in self.recursive_subdirs:
      result += self.generate_recursive_subdir_cmake(subdir)

    result += self.format_idl_files_text()

    if len(self.install_only_files):
      result += "install_package_files({}\n  {}\n)\n\n".format(self.package, "\n  ".join(self.install_only_files))

    if hasattr(self, 'msvc'):
      for line in  self.msvc:
        pattern = re.compile("compile_flags\s*\+=\s*(.+)$")
        match = pattern.match(line)
        if match:
          result += "if (MSVC)\n  target_compile_options({0} {1})\nendif()\n\n".format(self.name, match.group(1))
        else:
          print("Warning: In {0} ({1}): {2} is not translated".format( self.parent().path, self.name, line ) )

    try:
      with open(os.path.join(file_dir, self.name +  "_posttext.txt")) as f:
        result += f.read()
    except:
      pass

    return result


class CMakeProjectNode:
  def __init__(self, path, project):
    self.path = path
    self.dir, self.name = os.path.split(os.path.abspath(path))
    self.prefix = os.path.splitext(self.name)[0]
    self.children = []
    self.depends = []
    self.dependents = []
    self.mpc_children = []
    self.find_packages = set()
    self.project_base = ProjectBase.ACE
    self.idl_to_target = {}

    self.parse_mpc()
    for target in self.children:
      target.set_path(self.path)
      if not target.is_exe:
        project.add_lib_target(target)
      if target.install_this_target:
        target.name = target.output_name


  def handle_target_specific(self):
    for target in self.children:
      target_handler = getattr(target, 'handle_target_'+ target.name, None)
      if target_handler:
        target_handler()

  def parse_mpc(self):
    cur = self
    line = ""
    with open(self.path) as f:
      for raw_line in f:
        # remove comment and leading/trailing whitespaces
        line += raw_line.split("//", 2)[0].strip()
        if line:
          if line.endswith('{'):
            new_child = MPCNode(line[0:-1].strip())
            cur.add_child(new_child)
            cur = new_child
          elif line == '}':
            cur = cur.parent()
          elif line.endswith('\\'):
            line = line[:-1] + " "
            continue
          else:
            cur.add_child(MPCNode(line))
        line = ""

    for target in self.children:
      target.normalize_mpc_project()

    non_custom_only_children = [ x for x in self.children if not x.custom_only ]
    if len(non_custom_only_children):
      self.requires = set.intersection(*[x.requires for x in non_custom_only_children])
      for child in non_custom_only_children:
        child.requires = child.requires - self.requires
    else:
      self.requires = set()

  def get_project_base_text(self):
    return ProjectBase.reverse_mapping[self.project_base]

  def add_child(self, node):
    self.children.append(node)
    node.parent = weakref.ref(self)

  def resolve_dependencies(self, project):
    if self.children:
      for target in self.children:
        target.resolve_libs(project)
        target.resolve_dependent_idls(project)

      custom_only_targets = set(self.idl_to_target.values())
      reordered_children = []
      for target in self.children:
        if target not in custom_only_targets:
          reordered_children.append(target)
      reordered_children.extend(custom_only_targets)
      self.children = reordered_children



  def requires_text(self):
    def translate_require(cond):
      return requires_dict[cond] if cond in requires_dict else cond

    condition_text=" ".join([ translate_require(cond) for cond in self.requires] )

    if len(condition_text):
      return '\nace_requires(%s)\n' % condition_text
    return ""

  def cmake_text(self):
    return '\n'.join([ "find_package(%s)" % pakcage for pakcage in self.find_packages ] ) + "\n" + \
           self.requires_text() + "\n" + \
           '\n'.join([ target.cmake_text() for target in self.children] )

  def gen_node_text(self):

    if len(self.depends)==0:
      for dependent in self.dependents:
        dependent.depends.remove(self)
      return self.cmake_text()
    return None

  def generate_cmake(self):
    self.gen_node_text()

  def set_dependency(self, dependent, dependee):
    pass

  def custom_only_target_contains_idl(self, file_base):
    return self.idl_to_target.get(file_base + ".idl") or self.idl_to_target.get(file_base + ".pidl")

  def add_custom_only_target(self,target):
    for idl in target.all_idl_files():
      self.idl_to_target[idl] = target

  def get_project_base(self):
    self.local_dependencies_only = (len(self.depends) + len(self.dependents)) == 0
    return self.project_base

class CMakeDirNode:
  def __init__(self, path, project):
    self.path = path
    self.name = os.path.basename(path)
    self.children = {}
    self.depends = []
    self.dependents = []
    self.mpc_children = []
    self.local_dependencies_only = True
    self.project_base = ProjectBase.ACE

  def cmake_text(self):
    self.generate_cmake()
    if self.name == 'AnyTypeCode' or self.name == 'PortableServer':
      return "\n"
    return  "add_subdirectory(%s)\n" % self.name

  def gen_node_text(self):
    if len(self.depends)==0:
      for dependent in self.dependents:
        dependent.depends.remove(self)
      return self.cmake_text()
    return None

  def get_project_base(self):
    self.local_dependencies_only = (len(self.depends) + len(self.dependents)) == 0
    self.project_base = max( [ child.get_project_base() for child in self.children.values() ] )
    return self.project_base

  def get_project_base_text(self):
    return ProjectBase.reverse_mapping[self.project_base]

  def generate_cmake(self):
    processed_children = set()
    remaining_children = set(self.children.values())

    if len(self.mpc_children)==1:
      proj_name = os.path.splitext(self.mpc_children[0].name)[0]
    elif self.name != "":
      proj_name = self.name
    else:
      proj_name = os.path.basename(os.getcwd())

    filename = os.path.join(self.path,  "CMakeLists.txt")

    if os.path.exists(filename) and not override_cmakefiles:
      sys.stderr.write("Skip writing %s becuase it exists\n" % filename)
      return

    with open(filename, "w") as f:
      if self.local_dependencies_only and len(package)==0:
        project_base = self.get_project_base_text()
        project_root = project_base[-3:] + "_ROOT"
        f.write(cmake_file_preemble.format(proj_name, project_root, project_base))

      while len(remaining_children) != 0:
        for child in remaining_children:
          text = child.gen_node_text()
          if text:
            f.write(text)
            processed_children.add(child)
        remaining_children -= processed_children


class cmake_project:
  def __init__(self, path):
    if path:
      os.chdir(path)
    self.internal_libs_index_by_name = {}
    self.internal_libs_index_by_output_name = {}
    self.hierarchy = CMakeDirNode("", self)

    ignore_set = set(['ace_for_tao.mpc','svcconfgen.mpc','ace_foxreactor.mpc', 'ssl_for_tao.mpc', 'ConfigViewer.mpc'])
    leaves = [ self.parse_mpc_file(mpc_file) for mpc_file in glob2.glob("**/*.mpc") if not os.path.basename(mpc_file) in ignore_set]
    leaves = [x for x in leaves if x is not None]
    for leaf in leaves:
      leaf.resolve_dependencies(self)

    for leaf in leaves:
      leaf.handle_target_specific()

  def add_lib_target(self, lib):
    self.internal_libs_index_by_name[lib.name] = lib
    self.internal_libs_index_by_output_name.setdefault(lib.output_name, []).append(lib)

  def find_target_by_output_name(self, output_name, caller_path):
    r = self.internal_libs_index_by_output_name[output_name]
    if len(r):
      return r[0]
    else:
      ### more than one target have the same output name, we have to use the target
      ## that resides in the directory which is closer to the finder
      common_prefixe_lens =  [ len(os.path.commonprefix(caller_path, lib.path)) for lib in r ]
      max_index, max_value = max(enumerate(common_prefixe_lens), key=operator.itemgetter(1))
      return r[max_index]

  def parse_mpc_file(self, path):
    node = self.hierarchy
    p = ""
    for path_component in path.split('/')[0:-1]:
      p = os.path.join(p, path_component)
      node = node.children.setdefault(path_component, CMakeDirNode(p, self) )

    mpc_child = node.children.setdefault(os.path.basename(path), CMakeProjectNode(path, self) )
    node.mpc_children.append(mpc_child)
    return mpc_child

  def find(self, name):
    # remve trailing /

    if name=="":
      return self.hierarchy

    if name.endswith('/'):
      name = name[0:-1]

    components = name.split('/')
    node = self.hierarchy
    for comp in components:
      node = node.children[comp]
    return node

  def set_dependency(self, dependent_target, dependee_target):
    common_dir = os.path.dirname(os.path.commonprefix([dependent_target.path, dependee_target.path]))
    common_node = self.find(common_dir)

    common_dir_len = 0 if common_dir == "" else len(common_dir) + 1

    dependee_name = dependee_target.path[common_dir_len:].split('/')[0]
    dependent_name = dependent_target.path[common_dir_len:].split('/')[0]

    dependee_node = common_node.children[dependee_name]
    dependent_node = common_node.children[dependent_name]

    if dependee_node != dependent_node:
      dependee_node.dependents.append(dependent_node)
      dependent_node.depends.append(dependee_node)



  def generate_cmake_files(self):
    self.hierarchy.get_project_base()
    self.hierarchy.generate_cmake()

def main():
  parser = argparse.ArgumentParser(description='Convert MPC files into CMake files.')
  parser.add_argument('-o', '--override',action='store_true', default=False, help='override existing CMakefile.txt')
  parser.add_argument('-r', '--root', default=False, help='project root')
  parser.add_argument('-p', '--package', default="", help='default package')
  parser.add_argument('path', nargs='?', default=os.getcwd(), help='the directory to convert')
  args = parser.parse_args()
  global override_cmakefiles
  global project_directory
  global root
  global package

  override_cmakefiles = args.override
  project_directory = os.path.abspath(args.path)
  root = os.path.abspath(args.root)
  package = args.package

  proj = cmake_project(args.path)
  proj.generate_cmake_files()

if __name__ == "__main__":
  main()

