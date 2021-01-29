Pod::Spec.new do |spec|
  spec.name         = "driverisdk"
  spec.version      = "1.0.0"
  spec.summary      = "Netradyne Driveri SDK"
  spec.homepage     = "https://www.netradyne.com"
  spec.license      = "MIT"
  #spec.license      = { :type => "Apache License, Version 2.0", :file => "FILE_LICENSE" }
  spec.author       = { "apps-help" => "apps-help@netradyne.com" }
  spec.platform     = :ios
  spec.source       = { :http => 'https://github.com/anutosh-nd/driveri-sdk-ios/tree/master/releases/download/1.0.0/driverisdk.zip' }

  spec.ios.deployment_target = '11.0'
  spec.static_framework         = true
  spec.ios.vendored_frameworks = 'driverisdk.framework'

  spec.libraries                = "c++"
  spec.module_name              = "#{spec.name}_umbrella"

  spec.pod_target_xcconfig = {
        'KOTLIN_TARGET[sdk=iphonesimulator*]' => 'ios_x64',
        'KOTLIN_TARGET[sdk=iphoneos*]' => 'ios_arm',
        'KOTLIN_TARGET[sdk=watchsimulator*]' => 'watchos_x86',
        'KOTLIN_TARGET[sdk=watchos*]' => 'watchos_arm',
        'KOTLIN_TARGET[sdk=appletvsimulator*]' => 'tvos_x64',
        'KOTLIN_TARGET[sdk=appletvos*]' => 'tvos_arm64',
        'KOTLIN_TARGET[sdk=macosx*]' => 'macos_x64'
    }

end
