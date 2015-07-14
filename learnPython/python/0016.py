def fib(max):
	n,a,b=0,0,1
	while n<max:
		yield b
		a,b=b,a+b
		n=n+1
o = fib(1000)

#for x in range(1000):
#	print o.next()

print [o.next() for x in range(0, 100)]