# MyCloud Examples

![MyCloud: Elegant Networking in Swift](nvidia.png)

MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development.

- [Features](#features)
- [Installation](#installation)
- [Examples](#examples)


## Examples

MyCloud's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.
### Write 

```swift
import MyCloud

func writeExample() {
  let myCloud = MyCloud()
        
  let data = ["sys" : ["name" : "jon" ] ]
  myCloud.write( "folder", merge: true, data: data) { value in     
  }        
}
```

