# MyCloud Examples

![MyCloud: Elegant Networking in Swift](nvidia.png)

MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development.

- [Write](#write)
- [Read](#read)
- [Watch](#watch)


## Examples

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

