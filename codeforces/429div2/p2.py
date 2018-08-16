#! /usr/bin/python -tt
n=int(raw_input())
m=[int(i) for i in raw_input().split( )]
ans='Second'
s=0
for i in m:
	s+=i
	if s%2==1:
		ans='First'
		break
print ans 	
