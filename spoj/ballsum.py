#! /usr/bin/python

def gcd(a,b):
	if a==0:
		return b
	else:
		return gcd(b%a,a)

while 1:
	n,k=map(int,raw_input().split( ))
	if n==-1 and k==-1:
		break
	else:
		q=(n*(n-1))/2
		if k<3:
			print 0
		else:
			if k%2==0:
				r=((k)*(k-2))/4
			else:
				r=((k-1)**2)/4
			gc=gcd(r,q)
			r/=gc
			q/=gc		
			if r==q:
				print 1
			else:		
				print '{0}/{1}'.format(r,q)	
