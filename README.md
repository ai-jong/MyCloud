# MyCloud

![MyCloud: Elegant Networking in Swift](nvidia.png)

MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development (written in Swift).

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)

## Features

- [x] Generate responses and outputs based on MyCloud artificial intelligence <br> complex algorithms and machine learning techniques. <br> <br>
  - [x] Automatic retry
  - [x] Synchronized requests
  - [x] flexible, scalable database to store, sync

## Installation
### CocoaPods

[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects.<br> 
For usage and installation instructions, visit their website.<br> 
To integrate NvidiaAI into your Xcode project using CocoaPods, <br> specify it in your `Podfile`:
https://github.com/ai-jong/NvidiaAI/tree/main/Release
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

func nvidiaAIExample() {
    let nvidiaAI = NvidiaAI( apiKey: "nvapi-your nvidia api key");
                
     nvidiaAI.request("taiwan in five words or less") { ( result: String) in
        print("result: \(result)")
     }
        
     let questions = ["1+1", "1+2", "2+3"]
     for (index, q) in questions.enumerated() {
            print("Item \(index): \(q)")
            nvidiaAI.request("calculate '\(q)'") { ( result: String) in
                print("result: \(result)")
            }
     }
}
```

## License

MyCloud is released under the MIT license.

