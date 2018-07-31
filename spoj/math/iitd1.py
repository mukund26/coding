t=int(raw_input())
while t:
	n=int(raw_input())
	a=str(abs(n))
	a=len(a)
	if n>=0:
		x=pow(10,a-1)
	else:
		x=2*abs(n)+pow(10,a-1)
	print x
	t-=1