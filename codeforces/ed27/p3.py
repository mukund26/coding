n=int(raw_input())
l=[]
r=[]
for i in range(n):
	x,y=map(int,raw_input().split( ))
	l.append(x)
	r.append(y)
s=set(l)

if len(l)!=len(s):
	print 'NO'

else:
	x=zip(l,r)
	l.sort()
	x.sort()
	for i in range(1,n):
		if l[i]<r[i-1]:
			ans='NO'
			break
		else:
			ans='YES'
	print ans