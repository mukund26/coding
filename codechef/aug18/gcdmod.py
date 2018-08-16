def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)

def modular(a,n,mod):
	x=1
	while n:
		if(n%2):
			 x=(x*a)%mod
		n>>=1
		a=(a*a)%mod
	return x

n=int(raw_input())
while n:
	a,b,p=map(int,raw_input().split( ))
	if a==b:
		print (modular(a,p,1000000007)+modular(b,p,1000000007))%1000000007
	else:
		y=abs(a-b)
		x=(modular(a,p,y)+modular(b,p,y))%y
		print gcd(x,y)%1000000007
	n-=1

