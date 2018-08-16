t=int(raw_input())
while t:
	n=int(raw_input())
	l=[int(i) for i in raw_input().split( )]
	zero=l.count(0)
	one=l.count(1)
	minus=l.count(-1)
	other=n-zero-one-minus
	if other>1:
		print "no"
	elif minus>1 and one==0:
		print "no"
	elif other>0 and minus>0:
		print "no"
	else:
		print "yes"
	t-=1
