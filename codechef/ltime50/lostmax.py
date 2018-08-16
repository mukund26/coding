#! /usr/bin/python -tt
t=int(raw_input())
while(t):
	i=0
	n = [int(i) for i in raw_input().split()]
	n.sort()
	l=len(n)
	y=l-1
	if n[y]==l-1:
		print n[y-1]
	else:
		print n[y]
	t-=1