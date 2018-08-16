t=int(input())
while t:
	n,p=map(int,input().split())
	if p==1 or p==2 or n==1 or n==2:
		print ("impossible")
	else:
		ans='a'+'b'*(p-2)+'a'
		for i in range(n//p):
			print (ans,end='')
		print()
	t-=1