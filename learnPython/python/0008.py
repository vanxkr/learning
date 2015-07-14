def power(x, n=2):
	s = 1
	while n > 0:
		n = n - 1
		s = s*x
	return s

print power(10, 2)
print power(10)
print power(5, 5)