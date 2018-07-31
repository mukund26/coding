#! /usr/bin/python -tt
matrix=[[1,2,3],[4,5,6],[7,8,9]]
print "Trailing Diagonal Upper left triangle"
for i in range(0,3):
	for j in range(0,3):
		if (i+j)<=2:
			print matrix[i][j],
	print
print "Trailing Diagonal Lower Right triangle"
for i in range(0,3):
	print " "*(25-2*i),
	for j in range(0,3):
		if (i+j)>=2:
			print matrix[i][j],
	print
print "Leading Diagonal triangle |  Lower left triangle"
for i in range(0,3):
	for j in range(0,3):
		if i>=j:
			print matrix[i][j],
	print
print "Leading diagonal triangle | upper right ^"
for i in range(0,3):
	print" "*i*2,
	for j in range(0,3):
		if j>=i:
			print matrix[i][j],
	print
