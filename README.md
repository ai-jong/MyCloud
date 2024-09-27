# MyCloud for iOS

![MyCloud: Elegant Networking in Swift](nvidia.png)

MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development.

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)

## Features
- [x] Flexible, synchronized and scalable database
- [x] Quick setup

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
end

```

## Example

MyCloud's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.

```swift
import MyCloud

func myCloudExample() {
  let myCloud = MyCloud()
        
  let data = ["sys" : ["name" : "jon" ] ]
  myCloud.write( "folder", merge: true, data: data) { value in     
  }        
}
```
[More examples](https://github.com/ai-jong/MyCloud/blob/master/EXAMPLE.md)
## License

MyCloud is released under the MIT license.

