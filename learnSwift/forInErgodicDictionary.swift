// for..in.. ergodic dictionary
let interestingNumbers = [
    "Primer": [2, 3, 5, 7, 11, 13],
    "Fibonacci": [1, 1, 2, 3, 5, 8],
    "Square": [1, 4, 9, 16, 25],
]
var largest = 0
var typeName: String = nil
for (kind, numbers) in interestingNumbers {
    for number in number {
        if number > largest {
            largest = number
            typeName = kind
        }
    }
}
println(typeName)
println(\(largest))
