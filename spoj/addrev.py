#! /usr/bin/python
t=int(raw_input())
while t:
	x,y=map(int,raw_input().split())
	x=str(x)
	x=x[::-1]
	x=int(x)
	y=str(y)
	y=y[::-1]
	y=int(y)
	x=x+y
	x=str(x)
	x=x[::-1]
	x=int(x)
	print x
	t-=1
