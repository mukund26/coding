import sys

def pascal(n):
    l=[]
    for line in range(1,n+1):
        c=1
        x=[]
        print(' '*(n-line+1),end='')
        for i in range(1,line+1):
            x.append(c)
            print(c,end=' ')
            c=c*(line-i)//(i)
        l.append(x)
        print('\n')
    #print(l)

if __name__=='__main__':
    if len(sys.argv)==2:
        #n=int(input())
        pascal(int(sys.argv[1]))

