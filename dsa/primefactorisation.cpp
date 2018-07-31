#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int count=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count=0;
				while(n%i==0)
				{
					count++;
					printf("%d ",i);
					n/=i;
				}
			}
		}
		if(n!=1)
			printf("%d\n",n);
		
	}
	return 0;
}