from source_group import *


class Handler:
  def handle_mpb_wxwindows(self):
    self.requires.add('wxWidgets_FOUND')
    self.parent().find_packages.add('wxWidgets')
    self.external_libs.add('${wxWidgets_LIBRARIES}')
    self.includes.append('${wxWidgets_INCLUDE_DIRS}')

  def handle_mpb_ace_motif(self):
    self.requires.add('MOTIF_FOUND')
    self.parent().find_packages.add('Motif')
    self.external_libs.add('${MOTIF_LIBRARIES}')
    self.includes.append('${MOTIF_INCLUDE_DIR}')

  def handle_mpb_winregistry(self):
    self.requires.add('WIN32')

  def handle_mpb_ace_openssl(self):
    self.requires.add('OPENSSL_FOUND')
    self.parent().find_packages.add('OpenSSL')
    self.external_libs.add('${OPENSSL_LIBRARIES}')
    self.includes.append('${OPENSSL_INCLUDE_DIR}')

  def handle_mpb_ace_fl(self):
    self.requires.add('FLTK_FOUND')
    self.parent().find_packages.add('FLTK')
    self.external_libs.add('${FLTK_LIBRARIES}')
    self.includes.append('${FLTK_INCLUDE_DIR}')

  def handle_mpb_ace_tk(self):
    self.requires.add('TCLTK_FOUND')
    self.parent().find_packages.add('TCL')
    self.external_libs.add('${TK_LIBRARY}')
    self.external_libs.add('${TCL_LIBRARY}')
    self.includes.append('${TK_INCLUDE_PATH}')

  def handle_mpb_xerces(self):
    self.requires.add('XercesC_FOUND')
    self.parent().find_packages.add('XercesC')
    self.external_libs.add('${XercesC_LIBRARIES}')
    self.includes.append('${XercesC_INCLUDE_DIRS}')

  def handle_mpb_ace_xt(self):
    self.requires.add('X11_Xt_FOUND')
    self.parent().find_packages.add('X11 COMPONENTS Xt')
    self.external_libs.add('${X11_Xt_LIB}')
    self.includes.append('${X11_INCLUDE_PATH}')

  def handle_mpb_ace_qt4(self):
    self.requires.add('Qt4_FOUND')
    self.parent().find_packages.add('Qt4')
    self.external_libs.add('Qt4::QtCore')
    ## remove moc genereated files
    self.sources.source_files = [f for f in self.sources.source_files if f.endswith('_moc.cpp')]

  def handle_mpb_zzip(self):
    self.parent().find_packages.add('zziplib')
    self.external_libs.add('${ZZIPLIB_LIBRARIES}')
    self.includes.append('${ZZIPLIB_INCLUDE_DIRS}')
    self.compile_definitions.add('$<$<BOOL:${ZZIPLIB_FOUND}>:USE_ZZIP>')

  def handle_mpb_acexml(self):
    self.add_lib('ACEXML_Parser')

  def handle_mpb_ace_compressionlib(self):
    self.add_lib('ACE_Compression')

  def handle_mpb_ace_etcl_parser(self):
    self.add_lib('ACE_ETCL_Parser')

  def handle_mpb_ace_tkreactor(self):
      self.add_lib('ACE_TkReactor')

  def handle_mpb_ace_xtreactor(self):
    self.add_lib('ACE_XtReactor')

  def handle_mpb_ace_mc(self):
    self.add_lib('ACE_Monitor_Control')

  def handle_mpb_ace_flreactor(self):
    self.add_lib('ACE_FlReactor')

  def handle_mpb_ace_foxreactor(self):
    self.add_lib('ACE_FoxReactor')

  def handle_mpb_ace_etcl(self):
    self.add_lib('ACE_ETCL')

  def handle_mpb_qos(self):
    self.add_lib('ACE_QoS')

  def handle_mpb_ssl(self):
    self.add_lib('ACE_SSL')

  def handle_mpb_wfmo(self):
    self.requires.add('WIN32')

  def handle_mpb_winreistry(self):
    self.requires.add('WIN32')

  def handle_mpb_ace_xtreactor(self):
    self.add_lib('ACE_XtReactor')

  def handle_mpb_htbp(self):
    self.add_lib('ACE_HTBP')
    self.requires.add('ACE_UUID')

  def handle_mpb_rmcast(self):
    self.handle_mpb_threads()
    self.add_lib('ACE_RMCast')

  def handle_mpb_tmcast(self):
    self.handle_mpb_threads()
    self.add_lib('ACE_TMCast')

  def handle_mpb_inet(self):
    self.add_lib('ACE_INet')

  def handle_mpb_kokyu(self):
    self.add_lib('Kokyu')

  def handle_mpb_ace_mfc(self):
    self.requires.add('MFC_FOUND')
    self.parent().find_packages.add('MFC')

  def handle_mpb_aceexe(self):
    self.is_exe = True

  def handle_mpb_acelib(self):
    pass

  def handle_mpb_conv_lib(self):
    self.install_this_target = True

  def handle_mpb_install_bin(self):
    self.install_this_target = True

  def handle_mpb_install_lib(self):
    self.install_this_target = True

  def handle_mpb_install(self):
    self.install_this_target = True

  def handle_mpb_threads(self):
    self.requires.add('ACE_HAS_THREADS')

  def handle_mpb_support_ostream(self):
    pass

  def handle_mpb_acedefaults(self):
    pass

  def handle_mpb_pkgconfig(self):
    pass

  def handle_mpb_versioned_namespace(self):
    pass

  def hanle_mpb_acexml(self):
    self.add_lib('ACEXML_Parser')

  def handle_mpb_ace_rlecompressionlib(self):
    self.add_lib('ACE_RLECompression')

  def handle_mpb_ace_bzip2(self):
    self.external_libs.add("${BZIP2_LIBRARIES}")
    self.parent().find_packages.add('BZip2')

  def handle_mpb_ace_zlib(self):
    self.external_libs.add("${ZLIB_LIBRARIES}")
    self.parent().find_packages.add('ZLib')

  def handle_mpb_lzo1(self):
    self.external_libs.add("${LZO_LIBRARIES}")
    self.includes.append("${LZO_INCLUDE_DIR}")
    self.parent().find_packages.add('LZO')

  def handle_mpb_ace_qt4reactor(self):
    self.add_lib('ACE_QtReactor')
    self.external_libs.add('Qt4::QtGui')

  def handle_mpb_other(self):
    self.conditional_sources['ACE_OTHER'] = \
      CXXSourceGroup(source_files = ['Local_Name_Space.cpp',
                                      'Name_Proxy.cpp',
                                      'Name_Request_Reply.cpp',
                                      'Name_Space.cpp',
                                      'Naming_Context.cpp',
                                      'Registry_Name_Space.cpp',
                                      'Remote_Name_Space.cpp',
                                      'NT_Service.cpp']
                      )
  def handle_mpb_token(self):
    self.conditional_sources['ACE_TOKEN'] = \
      CXXSourceGroup(source_files = ['Local_Tokens.cpp',
                                      'Remote_Tokens.cpp',
                                      'Token_Collection.cpp',
                                      'Token_Invariants.cpp',
                                      'Token_Manager.cpp',
                                      'Token_Request_Reply.cpp']
                        )

  def handle_mpb_codecs(self):
    if self.name == 'ACE':
      self.conditional_sources['ACE_CODECS'] = \
        CXXSourceGroup(source_files = ['Codecs.cpp'])
    else:
      self.conditional_sources['ACE_CODECS'] = \
        CXXSourceGroup(source_files = ['XML_Codecs.cpp'])

  def handle_mpb_filecache(self):
    self.conditional_sources['ACE_FILECACHE'] = \
      CXXSourceGroup(source_files = ['Filecache.cpp'])

  def handle_mpb_uuid(self):
    self.conditional_sources['ACE_UUID'] = \
      CXXSourceGroup(source_files = ['UUID.cpp'])

  def handle_mpb_svcconf(self):
    self.conditional_sources['ACE_SVCCONF'] = \
      CXXSourceGroup(source_files = ['DLL.cpp',
                                      'Dynamic_Service_Base.cpp',
                                      'Dynamic_Service_Dependency.cpp',
                                      'Parse_Node.cpp',
                                      'Service_Config.cpp',
                                      'Service_Gestalt.cpp',
                                      'Service_Manager.cpp',
                                      'Service_Object.cpp',
                                      'Service_Repository.cpp',
                                      'Service_Types.cpp',
                                      'Shared_Object.cpp',
                                      'Svc_Conf_Lexer.cpp',
                                      'Svc_Conf_y.cpp',
                                      'Encoding_Converter.cpp',
                                      'Encoding_Converter_Factory.cpp',
                                      'UTF8_Encoding_Converter.cpp',
                                      'UTF16_Encoding_Converter.cpp',
                                      'UTF32_Encoding_Converter.cpp',
                                      'XML_Svc_Conf.cpp'])

  def handle_target_ACE(self):
    self.external_libs |= set(['${CMAKE_THREAD_LIBS_INIT}','${CMAKE_DL_LIBS}','${AIO_LIBRARY}'])
    self.includes += ['${CMAKE_CURRENT_SOURCE_DIR}/..', '${CMAKE_CURRENT_BINARY_DIR}/..']

  def handle_target_ACE_INet(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}/../..')

  def handle_target_ACE_TMCast(self):
    print("handle_target_ACE_TMCast")
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}/../..')

  def handle_target_ACE_RMCast(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}/../..')

  def handle_target_ACE_HTBP(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}/../..')

  def handle_target_Kokyu(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}')

  def handle_target_RPC_Client(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}')
    self.sources.header_files = ['${CMAKE_CURRENT_BINARY_DIR}/ping.h']
    self.sources.source_files = ['client.cpp',  '${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c']

  def handle_target_RPC_Server(self):
    self.includes.append('${CMAKE_CURRENT_SOURCE_DIR}')
    self.sources.header_files = ['${CMAKE_CURRENT_BINARY_DIR}/ping.h']
    self.sources.source_files = ['server.c',  '${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c']
