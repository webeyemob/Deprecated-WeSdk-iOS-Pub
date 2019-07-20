Pod::Spec.new do |spec|
  spec.name         = "WeMobMediation_Nend"
  spec.version      = "5.1.1.3"
  spec.summary      = "Nend Adapters for mediating through WeSdk."
  spec.homepage     = "https://github.com/webeyemob/WeSdk-iOS-Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "WeSdk"
  spec.platform     = :ios, "8.1"
  spec.source       = { :git => "https://github.com/webeyemob/WeSdk-iOS-Pub.git", :tag => "nend-#{spec.version}" }
  spec.vendored_frameworks  = "WeMobMediation_Nend/#{spec.version}/WeMobMediation_Nend.framework"
  spec.dependency 'NendSDK_iOS', '~> 5.1.1'
  spec.dependency "WeMobSdk", "~> 1.2.1"
end