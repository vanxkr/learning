import math
def is_primer(n):
	if n == 1:
		return False
	flag = True
	for x in range(2, int(math.sqrt(n) + 1)):
		if n%x == 0:
			flag = False
			break
	return flag
print filter(is_primer, range(1, 101))