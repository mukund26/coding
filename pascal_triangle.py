import sys

def pascal(n):
    for line in range(1,n+1):
        c=1
        print(' '*(n-line+1),end='')
        for i in range(1,line+1):
            print(c,end=' ')
            c=c*(line-i)//(i)
        print()

if __name__=='__main__':
    if len(sys.argv)==2:
        pascal(int(sys.argv[1]))
    else:
        print("Enter no of rows of pascal triangle")
