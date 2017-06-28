import ace_mpb
from ace_mpb import CXXSourceGroup

class Handler(ace_mpb.Handler):

  def handle_mpb_negotiate_codesets(self):
    self.add_lib('Negotiate_Codesets')

  def handle_mpb_orbsvcsexe(self):
    # self.handle_mpb_taoexe()
    # self.handle_mpb_negotiate_codesets()
    self.add_lib('For_OrbsvcsExe')

  def handle_mpb_codeset(self):
    self.add_lib('TAO_Codeset')

  def handle_mpb_orbsvcslib(self):
    self.handle_mpb_anytypecode()
    self.tao_idl_flags.append("-I${TAO_ROOT}/orbsvcs")

  def handle_mpb_anytypecode(self):
    self.handle_mpb_taolib()
    self.handle_mpb_taoidldefaults()
    self.add_lib('TAO_AnyTypeCode')
    self.tao_idl_flags_minus.extend(['-Sa', '-St'])

  def handle_mpb_ftorb(self):
    self.handle_mpb_orbsvcslib()
    self.add_lib('TAO_FT_ClientORB')
    self.add_lib('TAO_FT_ServerORB')

  def handle_mpb_valuetype(self):
    self.handle_mpb_anytypecode()
    self.handle_mpb_avoids_corba_e_micro()
    self.add_lib('TAO_Valuetype')

  def handle_mpb_ifr_client(self):
    self.handle_mpb_anytypecode()
    self.add_lib('TAO_IFR_Client')

  def handle_mpb_rtcorba(self):
    self.handle_mpb_pi()
    self.requires.add('RT_CORBA')
    self.add_lib('TAO_RTCORBA')

  def handle_mpb_avoids_corba_e_micro(self):
    self.requires.add('"NOT TAO_HAS_CORBA_E_MICRO"')

  def handle_mpb_avoids_minimum_corba(self):
    self.requires.add('"NOT TAO_HAS_MINIMUM_CORBA"')

  def handle_mpb_avoids_corba_e_compact(self):
    self.requires.add('"NOT TAO_HAS_CORBA_E_COMPACT"')

  def handle_mpb_iormanip(self):
    self.handle_mpb_portableserver()
    self.handle_mpb_valuetype()
    self.add_lib('TAO_IORManip')

  def handle_mpb_objreftemplate(self):
    self.add_lib('TAO_ObjRefTemplate')

  def handle_mpb_svc_utils(self):
    self.handle_mpb_orbsvcslib()
    self.add_lib('TAO_Svc_Utils')

  def handle_mpb_iortable(self):
    self.add_lib('TAO_IORTable')

  def handle_mpb_portableserver(self):
    self.add_lib('TAO_PortableServer')

  def handle_mpb_taoidldefaults(self):
    self.tao_idl_flags= ["-Sa", "-St"] + self.tao_idl_flags

  def handle_mpb_taolib_with_idl(self):
    self.handle_mpb_taolib()
    self.handle_mpb_taoidldefaults()

  def handle_mpb_tao_versioning_idl_defaults(self):
    self.tao_idl_flags= ["${TAO_VERSIONING_IDL_FLAGS}", "-Sa", "-St"] + self.tao_idl_flags

  def handle_mpb_dynamicinterface(self):
    self.handle_mpb_avoids_minimum_corba()
    self.handle_mpb_avoids_corba_e_compact()
    self.handle_mpb_messaging()
    self.add_lib('TAO_DynamicInterface')


  def handle_mpb_naming_serv(self):
    self.add_lib('TAO_CosNaming_Serv')

  def handle_mpb_pi(self):
    self.add_lib('TAO_PI')

  def handle_mpb_csd_framework(self):
    self.handle_mpb_portableserver()
    self.handle_mpb_pi()
    self.handle_mpb_avoids_corba_e_micro()
    self.add_lib('TAO_CSD_Framework')

  def handle_mpb_csd_threadpool(self):
    self.handle_mpb_csd_framework()
    self.handle_mpb_threads()
    self.add_lib('TAO_CSD_ThreadPool')

  def handle_mpb_gen_ostream(self):
    pass

  def handle_mpb_core_minimum_corba(self):
    pass

  def handle_mpb_valuetype_out_indirection(self):
    self.compile_definitions = [ "$<$<BOOL:${TAO_HAS_VALUETYPE_OUT_INDIRECTION}>:TAO_HAS_VALUETYPE_OUT_INDIRECTION>" ]

  def handle_mpb_pi_server(self):
    self.add_lib('TAO_PI_Server')

  def handle_mpb_interceptors(self):
    self.requires.add('TAO_HAS_INTERCEPTORS')

  def handle_mpb_tc(self):
    self.handle_mpb_interceptors()
    self.handle_mpb_pi()
    self.requires.add('TAO_HAS_TRANSPORT_CURRENT')
    self.add_lib('TAO_TC')

  def handle_mpb_taoexe(self):
    self.add_lib('TAO')
    self.is_exe = True

  def handle_mpb_taolib(self):
    self.add_lib('TAO')

  def handle_mpb_taoclient(self):
    self.is_exe = True
    self.output_name = 'client'
    self.add_lib('For_TAO_Client')

  def handle_mpb_taoserver(self):
    self.is_exe = True
    self.output_name = 'server'
    self.add_lib('For_TAO_Server')

  def handle_mpb_rt_client(self):
    self.is_exe = True
    self.add_lib('For_RT_Client')
    self.output_name = 'client'

  def handle_mpb_rt_server(self):
    self.is_exe = True
    self.add_lib('For_RT_Server')
    self.output_name = 'server'

  def handle_mpb_nolink_codecfactory(self):
    pass

  def handle_mpb_codecfactory(self):
    self.handle_mpb_anytypecode()
    self.add_lib('TAO_CodecFactory')

  def handle_mpb_compression(self):
    self.add_lib("TAO_Compression")

  def handle_mpb_extra_core(self):
    self.conditional_sources['NOT TAO_HAS_MINIMUM_CORBA'] = CXXSourceGroup(source_files = ['Dynamic_Adapter.cpp'])
    self.conditional_sources['TAO_HAS_CORBA_MESSAGING'] = CXXSourceGroup(source_files = ['Policy_Manager.cpp'])

  def handle_mpb_extra_anytypecode(self):
    self.conditional_sources['NOT TAO_HAS_MINIMUM_CORBA'] = CXXSourceGroup(source_files = ['ServicesA.cpp'])

  def handle_mpb_corba_messaging(self):
    self.requires.add('TAO_HAS_CORBA_MESSAGING')

  def handle_mpb_messaging(self):
    self.handle_mpb_corba_messaging()
    self.add_lib('TAO_Messaging')

  def handle_mpb_async_iortable(self):
    self.handle_mpb_dynamicinterface()
    self.add_lib('TAO_Async_IORTable')

  def handle_mpb_imr_client(self):
    self.add_lib('TAO_ImR_Client')

  def handle_mpb_orbsvcs_output(self):
    pass

  def handle_mpb_messaging_optional(self):
    self.handle_mpb_messaging()

  def handle_target_TAO(self):
    self.includes = ["${CMAKE_CURRENT_SOURCE_DIR}/..","${CMAKE_CURRENT_BINARY_DIR}/.."]
    self.public_compile_definitions = ["${TAO_COMPILE_DEFINITIONS}"]
    self.add_lib('ACE')

  def handle_target_TAO_Core_idl(self):
    self.skel_targets = ['TAO_PortableServer']
    self.anyop_targets = ['TAO_AnyTypeCode']

  def handle_target_TAO_PI(self):
    self.requires.add('TAO_HAS_INTERCEPTORS')

  def handle_target_TAO_Messaging(self):
    ## inherit the requires from TAO_PI
    self.requires = set()

  def handle_target_TAO_CSD_Framework(self):
    self.includes = []

  def handle_target_TAO_CSD_ThreadPool(self):
    self.includes = []
