t=int(raw_input())
while t:
	a,b=map(str,raw_input().split( ))
	i=max(len(a),len(b))
	a=int(a)
	b=int(b)
	su=[]
	while(i):
		x=a%10
		y=b%10
		su.append((x+y)%10)
		i-=1
		a/=10
		b/=10
	su=''.join(str(i) for i in su)
	print int(su[::-1])
	t-=1
