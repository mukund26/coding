import math
vect=[]
tree=[]
a=[]
arr=[]

def build(node,start,end,p):
	if start==end:
		tree[node]=a[start]%p
	else:
		mid=(start+end)//2
		build(2*node+1,start,mid,p)
		build(2*node+2,mid+1,end,p)
		tree[node]=(tree[2*node+1]*tree[2*node+2])%p

def query(node,start,end,l,r,p):
	if r<start or l>end:
		return 1
	else:
		if l<=start and r>=end:
			return tree[node]
		else:
			mid=(start+end)//2
			return (query(2*node+1,start,mid,l,r,p)*query(2*node+2,mid+1,end,l,r,p))%p

for i in range(2000010):
	tree.append(1)

t=long(raw_input())
while t:
	n,p,q=map(long,raw_input().strip().split())
	a=[long(i) for i in raw_input().strip().split()]
	arr=[long(i) for i in raw_input().strip().split()]
	build(0,0,n-1,p)
	x=0
	for i in range(q):
		if i%64==0:
			l=arr[i//64]+x
			r=arr[(i//64)+1]+x
			l%=n
			r%=n
			luki=[l,r]
			vect.append(luki)

		else:
			l=vect[i-1][0]+x
			r=vect[i-1][1]+x
			l%=n
			r%=n
			luki=[l,r]
			vect.append(luki)

		if l>r:
			l,r=r,l

		ans=query(0,0,n-1,l,r,p)
		x=(ans+1)%p   

	print x                   
	del vect[:]

	t-=1