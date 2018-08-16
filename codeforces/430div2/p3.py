n,m=map(int,raw_input().split( ))
l=[int(i) for i in raw_input().split( )]
while m:
	x=int(raw_input())
	l=[int(i)^x for i in l]
	l.sort()
	a=0
	for i in l:
		if a!=i:
			break
		a=i+1
	print a
	m-=1