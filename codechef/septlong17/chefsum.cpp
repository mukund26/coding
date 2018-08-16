#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			ll n,i;
			cin>>n;
			ll a[n],psum[n+1],ssum[n+1],mi,loc=1;
			memset(psum,0,sizeof(psum));
			memset(ssum,0,sizeof(ssum));
			for(i=1;i<=n;i++){
				cin>>a[i];
				psum[i]+=a[i]+psum[i-1];
			}
			ssum[1]=psum[n];
			psum[1]=psum[1]+ssum[1];
			mi=psum[1];
			for(i=2;i<=n;i++)
				{
					ssum[i]=ssum[i-1]-a[i-1];
					psum[i]+=ssum[i];
					if(mi>psum[i])
					{
						mi=psum[i];
						loc=i;
					}
				}
			cout<<loc<<endl;
		}
		return 0;
	}