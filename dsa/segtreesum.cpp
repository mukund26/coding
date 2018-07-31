#include <bits/stdc++.h>
using namespace std;


 int ar[10000000];

 int getmid( int s, int  e)
	{
		return s+(e-s)/2;
	}

int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    // If segment of this node is a part of given range, then return
    // the sum of the segment
    if (qs <= ss && qe >= se)
        return st[si];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
    int mid = getmid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
 

int getsum(int *st, int n, int qs, int qe)
{
      if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

 int constructuntil( int ar[],  int start, int end,  int *st, int current)
	{
		if (start==end)
		{
			st[current]=ar[start];
			
			return ar[start];
		}

		 int mid=getmid(start,end);
		// cout<<"before "<<st[current]<<" "<<current<<endl;
		st[current]=constructuntil(ar,start,mid,st,2*current+1)+constructuntil(ar,mid+1,end,st,2*current+2);
		//cout<<"after "<<st[current]<<" "<<current<<endl;
		return st[current];
	}

  int*construct( int ar[], int n)
	{
		 int height= int(ceil(log2(n)));
		 int mem=2*(int)pow(2,height)-1;
		 int*st=new  int[mem];

		constructuntil(ar,0,n-1,st,0);
		return st;
	}


int main()
	{
		 int size;
		cin>>size;
		for( int i=0;i<size;i++)
			cin>>ar[i];

		 int*st=construct(ar,size);
		 
		 int l,r,sum=0;
		cin>>l>>r;
		sum=getsum(st,size,l,r);
		cout<<sum<<endl;
		return 0;

	}