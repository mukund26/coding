#! /usr/bin/python -tt
t=int(raw_input())
while(t):
	s=str(raw_input())
	l=len(s)
	cc=1
	c=0
	if(l==1):
		if s[0]=='<' or s[0]=='>':
			print 2
		else:
			print 1
	if(l>1):
		ch=s[0]
		for i in range(1,l):
			if s[i]==ch and i<l and ch!='=':
				cc+=1
			if s[i]!=ch and i<l and s[i]!='=':
				cc=1
				ch=s[i]
			if cc>c:
				c=cc
		x=s.count('=')
		if x==l:
			print c
		else:
			print c+1
 
	t-=1 