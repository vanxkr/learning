// use protocol to statement a protocol
protocol ExampleProtocol {
    var ExampleDescription: String { get }
    mutating func adjust()
}

// class struct and enum all can realization the protocol
// class realization
class SimpleClass: ExampleProtocol {
    var simpleDescription: String = "A very simple class"
    var anthorProperty: Int = 69105
    func adjust() {
        simpleDescription += " Now 100% adjusted."
    }
}
var a = SimpleClass()
a.adjust()
let aDescription = a.simpleDescription

// struct realization
struct SimpleStructure: ExampleProtocol {
    var simpleDescription: String = "A simple structure"
    mutating func adjust {
        simpleDescription += " (adjusted)."
    }
}
var b = SimpleStructure()
b.adjust()
let bDescription = b.simpleDescription

// enum realization
enum SimpleEnum: ExampleProtocol {
    case simpleDescription1
    func simpleDescription() -> String {
        switch self {
            case .simpleDescription1:
                return "A simple enum"
        }
    }
    func simpleDescription(addString) -> String {
        switch self {
            case .simpleDescription:
                return SimpleEnum.simpleDescription+addString
        }
    }
    mutating func adjust() {
        swtich self {
            case .simpleDescription:
                simpleDescription(" (adjusted).")
        }
    }
}
var c = SimpleEnum.simpleDescription1
c.adjust
c = SimpleEnum.simpleDescription1

// 使用extension未现有类型添加功能
extension Int: ExampleProtocol {
    var simpleDescription: String {
        return "The number \(self)"
    }
    mutating func adjust() {
        self += 42
    }
}
7.simpleDescription
7.adjust()
let temp = 7.simpleDescription

