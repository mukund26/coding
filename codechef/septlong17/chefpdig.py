t=int(raw_input())
while t:
	x=[]
	n=int(raw_input())
	s=str(n)
	length=len(s)
	l=list(s)
	l=[int(i) for i in l]
	for i in range(length):
		if l[i]==6:
			for j in range(length):
				if j!=i and l[j]>=5:
					x.append(chr(60+l[j]))
		if l[i]==7 or l[i]==8:
			for j in range(length):
				if j!=i:
					x.append(chr(l[i]*10+l[j]))

		if l[i]==9:
			if(s.find(str(0))):
				x.append(chr(90))
	
	if x!=[]:
		x=list(set(x))
		x.sort()
		x=''.join(x)
		print x
	else:
		print '\n'
	t-=1