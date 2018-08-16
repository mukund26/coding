t=int(raw_input())
while t:
	n,k=map(int,raw_input().split( ))
	npos=k
	o=0
	st=0
	for i in range(n):
		if npos%2==0:
			o=st+npos//2
			npos//=2
		else:
			npos//=2;
			st+=(2**(n-i))//2;
			o=st+npos;
	print o
	t-=1