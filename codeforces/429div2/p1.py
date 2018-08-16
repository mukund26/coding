i=str(raw_input())
k=int(i.split( )[1])
a=str(raw_input())
d=set(a)
flag=0
for i in d:
	if a.count(i) > k: 
		flag=1
if flag==1:
	print 'NO'
else:
	print 'YES'
