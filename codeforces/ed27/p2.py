#! /usr/bin/python -tt
a=str(raw_input())
a=list(a)
a=[int(i) for i in a]
s1=sum(a[0:3])
s2=sum(a[3:])
diff=abs(s2-s1)
ans=0
if diff>0 and diff<=9:
	ans=1
elif diff>9 and diff<=18:
	ans=2
elif diff>18 :
	ans=3

print ans



		

