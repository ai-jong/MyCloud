# MyCloud Examples
<div align="center">
  <img src="cloud.png" alt="Image" width="60%"/>
</div>
MyCloud is a flexible, scalable database to store, sync, and query data library for mobile development.

- [Write](#write)
- [Read](#read)
- [Monitor](#monitor)


## Examples

### Write 

```swift
let data = ["sys" : ["name" : "jon" ] ]
let cloud = MyCloud()

cloud.write( "folder", merge: true, data: data) { value in
  print( "\(value)")
}        
```
### Read 

```swift
let cloud = MyCloud()

cloud.read("folder") { (result : Dictionary) in
  print( "\(result)" )
}
```
### Monitor 

```swift
let cloud = MyCloud()

cloud.monitor("folder") { (result : Dictionary) in
  print( "\(result)" )
}
```

