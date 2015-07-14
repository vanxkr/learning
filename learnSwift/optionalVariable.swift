var optionalString: String? = "Hello"
// use ? to init variable
optionalString = nil
var optionalName: String = "John Appleseed"
var greeting = "Hello!"
if let name = optionalName {
    greeting = "Hello, \(name)"
}
println(greeting)

// test
optionalName = nil
if let name = optionalName {
    greeting = "Hello, \(name)"
} else {
    greeting = "Oh my god!"
}
println(greeting)
