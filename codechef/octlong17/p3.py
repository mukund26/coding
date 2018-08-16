import random
t=int(raw_input())
while t:
	n=int(raw_input())
	print "99990 ",
	for i in range(99990):
		print "42952 ",

	n-=99991
	for i in range(n):
		print random.random()," ",

	print
	t-=1