#! /usr/bin/python -tt
k=int(raw_input())
for i in range(k):
	j=1
	for j in range(1,i+1):
		print j,
	j=j-1
	while j>=1:
		print j,
		j=j-1
	print

