# MyCloud Examples

![MyCloud: Elegant Networking in Swift](nvidia.png)

MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development.

- [Examples](#examples)
- [Write](#write)
- [Read](#read)
- [Watch](#watch)


## Examples

MyCloud's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.
### Write 

```swift
  let data = ["sys" : ["name" : "jon" ] ]
  let myCloud = MyCloud()

  myCloud.write( "folder", merge: true, data: data) { value in     
  }        
```
### Read 

```swift
  let myCloud = MyCloud()

   myCloud.read("folder") { ( result : [AnyHashable : Any]) in
     print( "\(data)" )
   }
```
### Watch 

```swift
  let myCloud = MyCloud()

  myCloud.watch("folder") { ( result : [AnyHashable : Any]) in
     print( "\(data)" )
  }
```

