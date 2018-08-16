#include<bits/stdc++.h>
using namespace std;

void input(long long int ar[],long long int sz)
{
	long long int i;
	for(i=0;i<sz;i++)
	{
		scanf("%lld",&ar[i]);
	}
}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			long long int n,sum=0,max=0;
			scanf("%lld",&n);
			long long int c[n],w[n],l=0,r=0,i,j,k;
			input(c,n);
			input(w,n);
			for(i=0;i<n;i++)
			{
				l=i;
				for (j = i; j< n; ++j)
				{
					if(c[i]!=c[j])
					{
						r++;
					}
				}
			}
		}
		return 0;
	}