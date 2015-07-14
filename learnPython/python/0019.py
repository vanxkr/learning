def str_to_int(s):
	def fn(x, y):
		return x*10 + y
	def char_to_num(s):
		return {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}[s]
	return reduce(fn, map(char_to_num, s))
s1 = '1234'
s2 = '2345'
print str_to_int(s1) + str_to_int(s2)