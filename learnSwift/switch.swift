// 默认break 与C/C++默认相反
let vegetable = "red pepper"
switch vegetable {
    caes "celery":
        let vegetableComment = "Add some raisins and make ants on a log."
    case "cucumber", "watercress": // 可以一次case多个值
        let vegetableComment = "That would make a good tea sandwich."
    case let x where x.hasSuffix("pepper"):
        let vegetableComment = "Is it a spicy \(x)?"
    default: 
        let vegetableComment "Everything tastes good in soup."
}
