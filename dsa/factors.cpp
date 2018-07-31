#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[100000],count=0;
		for(i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				cout<<i<<" ";
				if(i!=sqrt(n))
					cout<<n/i<<" ";
			}
		}

	}
	return 0;
}