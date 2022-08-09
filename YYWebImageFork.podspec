Pod::Spec.new do |s|
  s.name         = 'YYWebImageFork'
  s.summary      = 'Asynchronous image loading framework.'
  s.version      = '1.0.0'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'ibireme' => 'ibireme@gmail.com' }
  s.social_media_url = 'http://blog.ibireme.com'
  s.homepage     = 'https://github.com/huawt/YYWebImageFork'
  s.ios.deployment_target = '12.0'
  s.source       = { :git => 'https://github.com/huawt/YYWebImageFork.git', :tag => s.version.to_s }
  
  s.requires_arc = true
  s.source_files = 'YYWebImageFork/Classes/*.{h,m}', 'YYWebImageFork/Classes/Categories/*.{h,m}'
  s.public_header_files = 'YYWebImageFork/Classes/*.{h}', 'YYWebImageFork/Classes/Categories/*.{h}'
  s.private_header_files = 'YYWebImageFork/Classes/Categories/_*.{h}'
  s.dependency 'YYImageWebp'
  s.dependency 'YYCache'
  
end
