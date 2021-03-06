Pod::Spec.new do |spec|
  spec.name         = "driverisdk"
  spec.version      = "1.0.0"
  spec.summary      = "Netradyne Driveri SDK"
  spec.homepage     = "https://www.netradyne.com"
  spec.license      = "MIT"
  #spec.license      = { :type => "Apache License, Version 2.0", :file => "FILE_LICENSE" }
  spec.author       = { "apps-help" => "apps-help@netradyne.com" }
  spec.platform     = :ios
  spec.source       = { :http => 'https://github.com/anutosh-nd/driveri-sdk-ios/raw/master/releases/download/1.0.0/driverisdk.zip' }
  spec.ios.deployment_target = '12.0'
  spec.static_framework         = true
  spec.ios.vendored_frameworks = 'driverisdk.framework'

  spec.libraries                = "c++"
  spec.module_name              = "#{spec.name}_umbrella"

  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
