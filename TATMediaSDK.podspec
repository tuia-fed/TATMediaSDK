Pod::Spec.new do |s|
  s.name     = 'TATMediaSDK'
  s.version  = '0.0.6'
  s.summary  = 'An easy way to integrate AD.'
  s.description = 'TATMediaSDK provides an easy way to integrate AD.'

  s.homepage = 'https://github.com/tuia-fed/TATMediaSDK'
  s.authors   = { 'xuesong-iOS' => 'wurui1@tuia.cn' }
  s.license  =  { :type => 'MIT', :file => 'LICENSE' }
  s.source   = { :git => 'https://github.com/tuia-fed/TATMediaSDK.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '9.0'

  s.pod_target_xcconfig = { 'VALID_ARCHS[sdk=iphonesimulator*]' => '' }
  s.vendored_frameworks = 'TATMediaSDK.framework'
  s.resources = 'TATMediaSDK.bundle'

  s.requires_arc = true
  s.frameworks   = 'MobileCoreServices', 'CFNetwork', 'CoreGraphics'
  s.libraries    = 'z.1'

  s.dependency 'AFNetworking', '~>3.0'
  
end
