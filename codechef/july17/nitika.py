t=int(raw_input())
while(t):
	l=str(raw_input())
	l=l.split(" ")
	i=0
	for i in range(3):
		if i<2:
			l[i]=l[i].upper
			#l[i]=l[i][0]+"."
		else:
			l[i]=l[i][0].upper()+l[i][1:].lower()

	print l
	t-=1
