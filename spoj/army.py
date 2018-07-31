t=raw_input()
t=int(t)
while t:
	print
	n=raw_input()
	ngl=raw_input()
	ngl=ngl.split(" ")
	ngl=max([int(i) for i in ngl])
	nml=raw_input()
	nml=nml.split(" ")
	nml=max([int(i) for i in nml])
	if ngl>=nml:
		print "Godzilla"
	else:
		print "MechaGodzilla"
		
	t-=1