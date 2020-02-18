Pod::Spec.new do |s|
  s.name     = 'TATMediaSDK'
  s.version  = '0.0.4'
  s.summary  = 'An easy way to integrate AD'
  s.description = 'TATMediaSDK provides an easy way to integrate AD'

  s.homepage = 'https://github.com/Wuleslie/TATMediaSDK'
  s.license  = { :type => 'MIT', :file => 'LICENSE' }
  s.author   = { 'wuleslie' => 'wuleslie@outlook.com' }
  s.source   = { :git => 'https://github.com/Wuleslie/TATMediaSDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.vendored_frameworks = 'TATMediaSDK.framework'
  s.resources    = 'TATMediaSDK.bundle'
  #s.source_files = 'TATMediaSDK/*.{h,m}'
  #s.resource_bundles = {
  #  'TATMediaSDK' => ['TATMediaSDK/Assets/**/*']
  #}

  s.frameworks   = 'MobileCoreServices', 'CFNetwork', 'CoreGraphics'
  s.libraries    = 'z.1'
  s.requires_arc = true
  
  s.dependency 'AFNetworking'
  
end
