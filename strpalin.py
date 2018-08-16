#! /usr/bin/python -tt

t=int(raw_input())
while(t):
	a=str(raw_input())
	b=str(raw_input())
	flag=0
	for i in range(len(a)):
		x=a[i]
		y=b.find(x)
		if y!=-1:
			flag=1
			break
	if flag==1:
		print "Yes"
	else:
		print "No"
	t-=1