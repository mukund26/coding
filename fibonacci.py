def fib(a,b,n):
	if n==0:
		return b
	else:
		return fib(b,a+b,n-1)

print fib(1,1,4)
