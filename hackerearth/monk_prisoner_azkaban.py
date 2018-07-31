n=int(raw_input())
a=map(int,raw_input().split())
y=[]
flag=True
for i in range(0,n-1):
	flag=True
	for j in range(i+1,n):
		if a[j] > a[i]:
			flag=False
			y.append(j+1)
			break
	if flag==True:	
		y.append(-1)
y.append(-1)
x=[-1]
for i in range(1,n):
	f=-1
	for j in range(0,i):
		if a[j]>a[i]:
			f=j+1		
	x.append(f)
m=map(lambda a, b: a+b, x, y)
print(m)

