// learn to use generic
// generic function
func repeat<ItemType>(item: ItemType, times: Int) -> ItemType[] {
    var result = ItemType[]()
    for i in 0..times {
        result += item
    }
    return result
}
repeat("knock, 4")
repeat(8, 8)

// generic enum
enum OptionalValue<T> {
    case None
    case Some(T)
}
var possibleInterger: OptionalValue<Int> = .None
possibleInterger = .Some(100)

// use where to restrict the type range
func anyCommonElements <T, U where T: Sequence, U: Sequence, T.GeneratorType.Element: Equatable, T.GeneratorType.Element == U.GeneratorType.Element> (lhs: T, rhs: U) -> Bool { 
    for lhsItem in lhs { 
        for rhsItem in rhs { 
            if lhsItem == rhsItem { 
                return true 
            } 
        } 
    } 
    return false 
} 
anyCommonElements([1, 2, 3], [3]) 
