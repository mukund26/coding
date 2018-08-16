import math
t=int(raw_input())
while t:
	n,s=map(int,raw_input().split( ))
	if n==1:
		if s!=0:
			print "-1"	
		else:
			print '1'
	else:
		ans=(s*math.sqrt(2*n))/2
		if ans==0:
			print '0',
		else:
			print -ans,
		for i in range(0,int(n)-2):
			print 0,
		if ans==0:
			print '0'
		else:
			print ans
	t-=1