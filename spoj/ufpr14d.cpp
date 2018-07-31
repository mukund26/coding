#include <bits/stdc++.h>
using namespace std;

int main()
	{
		long int n,q;
		cin>>n;
		long int a[n],sum[n+1];
		memset(sum,0,sizeof(sum));
		for(long int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum[i]+=sum[i-1]+a[i];
		}
		cin>>q;
		while(q--)
		{
			long int a,b;
			cin>>a>>b;
			cout<<sum[b]-sum[a-1]<<endl;
		}

		return 0;
	}