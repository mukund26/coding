#! /usr/bin/python

def gcd(a,b):
	if b==0:
		return a
	else:
		gcd(b%a,a)

while 1:
	n,k=map(int,raw_input().split( ))
	if n==-1 and k==-1:
		break
	else:
		q=n*(n-1)/2
		count=0
		if k%2==0:
			r=(k/2)-1
		else:
			r=k/2
		k-=1
		for i in range(1,r+1):
			count+=(k-i)
			k-=1
		if count==0:
			print 0
		else:
			g=gcd(count,q)
			a/=g
			b/=g		
			if a==b:
				print 1
			else:		
				print '{0}/{1}'.format(a,b)	
