#include <bits/stdc++.h>
using namespace std;
const long int mod=1000000007;

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			long long int n,m,k,ans;
			cin>>n>>m>>k;
			ans=m;
			while(m--)
			{
				long long int u,v;
				cin>>u>>v;
			}
			for(long long int i=1;i<=n-2;i++)
			{
				ans=(ans*2)%mod;
				//cout<<ans<<" ";
			}
			cout<<ans<<endl;

		}
		return 0;
	}

