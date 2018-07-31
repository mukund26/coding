def recursion(x,n):
	#print x,n
        if n==0:
                return 1
        elif n%2==0:
                return recursion((x*x)%1000000007,n/2)
        else:
		return (x*recursion((x*x)%1000000007,(n-1)/2))%1000000007

x,n=map(int,raw_input().split( ))

print recursion(x,n)
