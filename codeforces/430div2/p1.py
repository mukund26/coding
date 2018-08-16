l,r,x,y,k=map(int, raw_input().split( ))
x*=k
y*=k
if x in range(l,r+1) or y in range(l,r+1):
	print "YES"
else:
	print "NO"