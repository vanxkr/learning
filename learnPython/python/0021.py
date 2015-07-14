def pord(L):
	return reduce(lambda x, y: x*y, L)
L = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print pord(L)