n,m=map(int,raw_input().split( ))
s,t=raw_input(),raw_input()
if '*' in s:a,b=s.split('*');ans=t.startswith(a) and t[len(a):].endswith(b)
else:ans=(s==t)
print("NO","YES")[ans]
