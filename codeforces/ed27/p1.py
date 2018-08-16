n=int(raw_input())
l=[int(i) for i in raw_input().split( )]
l=sorted(l)
if l[int(n)-1]>=l[int(n)]:
	print 'NO'
else:
	print 'YES'
