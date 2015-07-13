# -*- coding: utf-8 -*-
#切片
l = ['a', 'b', 'c']

#0-n
print(l[0:3])

#0开始 可以省略
print(l[:3])

#倒数切片
print(l[-2:])
print(l[-2:-1])

#0-99
LL = list(range(100))
print(LL)

print(LL[:10])
print(LL[-10:])
print(LL[10:20])

#前10个数 每两个数取一个
print(LL[:10:2])

#所有的数每5个取一个
print(LL[::5])
