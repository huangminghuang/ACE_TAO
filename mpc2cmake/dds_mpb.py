import tao_mpb


class Handler(tao_mpb.Handler):
  def handle_mpb_dcps_test_lib(self):
    self.sources.source_files = []
    self.sources.header_files = []
    self.sources.template_files = []
    self.sources.inline_files = []

  def handle_mpb_dcpsexe(self):
    self.external_libs.add("OpenDDS_Default_Discovery")
    self.is_exe = True

  def handle_mpb_dcps_transports_for_test(self):
    self.external_libs.add("OpenDDS_Transports_For_Test")

  def handle_mpb_mc_test_utils(self):
    self.internal_libs.add('MC_Test_Utilities')

  def handle_mpb_dcps_monitor(self):
    self.add_lib("OpenDDS_monitor")

  def handle_mpb_dcps_test(self):
    self.internal_libs.add("TestFramework")

  def handle_mpb_dcps_inforepodiscovery(self):
    self.add_lib("OpenDDS_InfoRepoDiscovery")

  def handle_mpb_dcps_rtpsexe(self):
    self.add_lib("OpenDDS_Rtps")
    self.is_exe = True

  def handle_mpb_dcps_default_discovery(self):
    self.external_libs.add("OpenDDS_Default_Discovery")

  def handle_mpb_content_subscription(self):
    self.requires.add('CONTENT_SUBSCRIPTION')

  def handle_mpb_content_subscription_core(self):
    self.requires.add('CONTENT_SUBSCRIPTION_CORE')

  def handle_mpb_opendds_face(self):
    self.add_lib('OpenDDS_FACE')
    self.aspects.add('FACE')

  def handle_mpb_dds_model(self):
    self.add_lib('OpenDDS_Model')

  def handle_mpb_dcps_qos_xml_handler(self):
    self.add_lib('OpenDDS_QOS_XML_XSC_Handler')

  def handle_mpb_dcps_transports(self, base):
    self.external_libs.add("OpenDDS" + base[4:].title())

  def handle_target_ishapes(self):
    self.includes = ["${Boost_INCLUDE_DIRS}"]
    self.add_lib('Qt4::QtGui')