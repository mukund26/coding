import math
R,d=map(int,raw_input().split( ))
n=int(raw_input())
count=0
while n:
	x,y,r=map(int,raw_input().split( ))
	dist=math.sqrt(x**2+y**2)
	if dist>=(R-d+r) and (r+dist)<=R:
		count+=1
	n-=1
print count

