t=int(raw_input())
while t:
	d=int(raw_input())
	su=10
	while su>9:
		su=0
		while d:
			su+=d%10
			d//=10
		d=su
	if su<9:
		print su+1
	else:
		print 1
	t-=1