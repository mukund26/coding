t=int(raw_input())
while t:
	x,y,a,b=map(int,raw_input().split( ))
	if x==a and y<b:
		print "up"
	elif x==a and y>b:
		print "down"
	elif x>a and y==b:
		print "left"
	elif x<a and y==b:
		print "right"
	else:
		print "sad"
	t-=1