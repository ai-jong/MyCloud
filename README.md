# MyCloud for iOS

![MyCloud: Elegant Networking in Swift](cloud.png)

MyCloud is an open-source, Swift-based cloud storage library designed to simplify cloud data management.

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)
- [Contact](#contact)

## Features
- [x] Reading data from cloud storage
- [x] Writing data to cloud storage
- [x] Monitoring cloud storage activity

## Installation
### CocoaPods

[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects.<br> 
For usage and installation instructions, visit their website.<br> 
To integrate MyCloud into your Xcode project using CocoaPods, <br> specify it in your `Podfile`:

```ruby
platform :ios, '14.0'
use_frameworks!

target 'NvidiaAIExample' do
  pod "MyCloud", :git => 'https://github.com/ai-jong/MyCloud.git', :branch => 'main'
# pod 'MyCloud', :path => '../MyCloud/Release'
end

```

## Example

```swift
import MyCloud

func myCloudExample() {
  let myCloud = MyCloud()
        
  let data = ["sys" : ["name" : "jon" ] ]
  myCloud.write( "folder", merge: true, data: data) { value in     
  }        
}
```
[More Examples](https://github.com/ai-jong/MyCloud/blob/master/EXAMPLE.md)

## License
MyCloud is released under the MIT license.

## Contact
- [x] Author: John W. Blaine
- [x] Email: john.w.blaine@gmail.com
