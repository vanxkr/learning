// easy fuction
func greet(name: String, day: String) -> String {
    return "Hello \(name), today is \(day)"
}
greet("Bob", "Tuesday")

// 使用元组来返回多个值
func getGasPrices() -> (Double, Double, Double) {
    return (3.59, 3.69, 3.79)
}
getGasPrices()

// 传入不定个数的参数
func sumOf(numbers: Int...) -> Int {
    var sum = 0
    for number in numbers {
        sum += number    
    }
    return sum
}
sumOf()
sumOf(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)

// test
func valueOf(numbers: Double...) -> Double {
    var value = 0.0
    var sum = 0.0
    var n = 0
    for number in numbers {
        sum += number
        ++n
    }
    value = sum/n
    return value
}
valueOf()
valueOf(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)

// 函数嵌套
func returnFifteen() -> Int {
    var y = 0
    func add() {
        y += 5
    }
    add()
    return y
}
returnFifteen()

// 返回一个函数
func makeIncrementer() -> (Int -> Int) {
    func addOne(number: Int) -> Int {
        retu 1 + number
    }
    return addOne
}
var increment = makeIncrementer()
increment(7)

// 函数作为一个参数传入另一个函数
func hasAnyMatches(list: Int[], condition: Int -> Bool) -> Bool {
    for item in list {
        if condition(item) {
            return true
        }
    }
    return false
}

func lessThanTen(number: Int) -> Bool {
    return number < 10
}
var numbers = [20, 19, 2, 11]
hasAnyMatches(numbers, lessThanTen)

// 函数实际上是一个特殊的闭包
number.map({
    (number: Int) -> Int in
    let result = 3 * number
    return result
    })


