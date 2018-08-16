#! /usr/bin/python -tt
t=int(raw_input())
while(t):
	n=str(raw_input())
	l=len(n)
	cost=0
	i=0
	while i<l-1:
		x=n.find(n[i],i+1) 
		if x!=-1:
			cost+=0
			i=x
		else:
			cost+=abs(ord(n[i+1])-ord(n[i]))
			i+=1
			
	print cost		
	t-=1				
