n,k=map(int,input().split())
ans=(n-k)//2
s=input()
s=s.replace('(','',ans)
s=s.replace(')','',ans)
print(s)
