// 1 learn to use let and var
let myConstant = 42
var myVariable = 42
myVariable = 52

// 2
let implicitInteger = 70
let implicitDouble = 70.0
let implicitDouble2: Double = 70 // 未指明类型

// 3
let label = "The width is"
let width = 94
let widthLabel = label + String(width) // 删掉String会怎样?

// 4 \() 可以简单地将值转换成字符串
let apples = 3
let oranges = 5
let appleSummary = "I have \(apples) apples."
let fruitSummary = "I have \(apples + oranges) pieces of fruit."

