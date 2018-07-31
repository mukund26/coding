p=int(raw_input())
while p:
	n,k,m=map(int,raw_input().split( ))
	s=0
	t=0
	if k<=m/n:
		t+=1
		s=n*k
		while k<=m/s:
			s*=k
			t+=1
	print t
	p-=1