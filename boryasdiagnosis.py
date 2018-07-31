import math
n=int(raw_input())
count=0
while n:
	count+=1
	s,d=map(int,raw_input().split( ))
	k=max(math.ceil((count-s)/d),0)	
	count=s+d*k	 
	n-=1
print count
