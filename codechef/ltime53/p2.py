t=int(raw_input())
while t:
	n=raw_input()
	i=len(n)
	a=0
	m=0
	while i:
		b=n[0:a]+n[a+1:]
		temp=b
		b=int(b)
		#print b
		if b%6==0:
			if b>m:
				m=b
				s=temp
		a+=1
		i-=1
	if m!=0:
		print s[:]
	else:
		print -1
	t-=1