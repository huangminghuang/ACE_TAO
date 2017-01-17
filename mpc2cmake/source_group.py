#!/usr/bin/env python

import glob
import os
import argparse

def format_target_properties_in_list(obj, properties):
  result = ""
  for prop_name in properties:
    try:
      prop_value = getattr(obj, prop_name)
      if len(prop_value):
        line = "  %s " % prop_name.upper()
        indent = len(line)
        if hasattr(prop_value, '__iter__'):
          prop_value = list(prop_value)
          line += prop_value[0]
          for item in prop_value[1:]:
            line += "\n" + ' ' * indent + item
        else:
          line += prop_value
        result += line + '\n'
    except:
      pass
  return result

def glob_dir_with_pattern(dir, pattern):
  return [ os.path.basename(f) for f in glob.glob(os.path.join(dir,pattern))]

def list_difference(a,b):
  if a:
    return [x for x in a if x not in b]
  else:
    return a

class CXXSourceGroup:
  def __init__(self, source_files = None):
    self.source_files = source_files
    self.header_files = []
    self.inline_files = []
    self.template_files = []
    self.subgroup = None

  def complete_group(self, dir):
    cpp_files = glob_dir_with_pattern(dir, '*.cpp')
    if self.source_files == None:
      self.source_files = []
      for f in cpp_files:
        if f.endswith("_T.cpp"):
          self.template_files.append(f)
        else:
          self.source_files.append(f)
    elif len(self.source_files):
      if all([x.startswith('!') for x in self.source_files]):
        self.source_files = list(set(glob_dir_with_pattern(dir, '*.cpp')) - set([ x[1:] for x in self.source_files]))
      else:
        self.source_files = [ f for f in self.source_files if os.path.exists( os.path.join(dir , f)) ]

    h_files = glob_dir_with_pattern(dir, '*.h')
    inl_files = glob_dir_with_pattern(dir, '*.inl')

    for f in self.source_files + self.template_files:
      basename = os.path.splitext(f)[0]
      file = basename + ".h"
      if file in h_files and file not in self.header_files:
        self.header_files.append(file)
      file = basename + ".inl"
      if file in inl_files and file not in self.inline_files:
        self.inline_files.append(file)

    t_cpp_file =  glob_dir_with_pattern(dir, '*_T.cpp')
    self.header_files = list(set(self.header_files) & set(h_files))
    self.inline_files = list(set(self.inline_files) & set(inl_files))
    self.template_files = list(set(self.template_files) & set(t_cpp_file))
    self.source_files = list(set(self.source_files) - set(self.template_files))

  def glob(self, dir):
    self.source_files = glob_dir_with_pattern(dir, '*.cpp')
    self.header_files = glob_dir_with_pattern(dir, '*.h')
    self.header_files += glob_dir_with_pattern(dir, '*.hpp')
    self.inline_files = glob_dir_with_pattern(dir, '*.inl')
    self.inline_files += glob_dir_with_pattern(dir, '*.ipp')
    self.template_files = glob_dir_with_pattern(dir, '*_T.cpp')
    self.template_files += glob_dir_with_pattern(dir, '*.tpp')
    self.source_files = list(set(self.source_files) - set(self.template_files))

  def remove_generated_files_for_idl(self, idl_file):
    name_we = os.path.splitext(idl_file)[0]
    stub_file = name_we + "C.cpp"
    skel_file = name_we + "S.cpp"
    self.source_files = list_difference(self.source_files, [name_we + "C.cpp", name_we + "S.cpp",name_we + "S_T.cpp", name_we + "A.cpp"])
    self.header_files = list_difference(self.header_files, [name_we + "C.h", name_we + "S.h", name_we + "A.h"])
    self.inline_files = list_difference(self.inline_files, [name_we + "C.inl"])
    self.template_files = list_difference(self.template_files, [name_we + "S_T.cpp"])

  def cmake_text0(self, target_name, condition=None, subdir=None):
    if 0 == len(self.source_files) + len(self.header_files) + len(self.inline_files) + len(self.template_files):
      return ""
    if subdir:
      self.subgroup = "\\\\" + subdir.replace('/', '\\\\')

    self.source_files.sort()
    self.header_files.sort()
    self.inline_files.sort()
    self.template_files.sort()

    result = "ace_target_cxx_sources(%s\n" % target_name + format_target_properties_in_list(self,["source_files", "header_files", "inline_files", "template_files", "subgroup"])+ ")\n";
    if condition:
      indent = '  '
      indented = indent + result.replace('\n', '\n' + indent)
      result = "if({0})\n{1}endif()".format(condition, indented.rstrip(' '))
    return result + "\n"

  def cmake_text(self, target, condition=None, subdir=None):
    self.complete_group(target.parent().dir)
    return self.cmake_text0(target.name, condition, subdir)

  @staticmethod
  def subdir_cmake_text(target_name, abspath, recursive, filename):

    result = ""
    basename = os.path.basename(abspath)
    if recursive:
      dirnames = [x[0] for x in os.walk(abspath)]
      print(dirnames)
    else:
      dirnames = [abspath]

    for dirname in dirnames:
      group = CXXSourceGroup()
      group.glob(dirname)
      with open(os.path.join(dirname, filename), 'w') as f:
        rel_dir = basename + dirname[len(abspath):]
        f.write(group.cmake_text0(target_name, subdir=rel_dir))
        result += 'include("%s/CMakeLists.txt")\n' % rel_dir
    return result

def main():
  parser = argparse.ArgumentParser(description='generate target source files list.')
  parser.add_argument('-r', '--recursive', action='store_true', help='recursive')
  parser.add_argument('-t', '--target', required=True, help='target name')
  parser.add_argument('-f', '--filename', default='sources.txt', help='output filename')
  parser.add_argument('path', nargs='?', default=os.getcwd(), help='the directory to convert')
  args = parser.parse_args()
  print  CXXSourceGroup.subdir_cmake_text(args.target, os.path.abspath(args.path), args.recursive, args.filename)

if __name__ == "__main__":
  main()
