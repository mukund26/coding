#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			ll n,zeros=0;
			cin>>n;
			ll k=floor(log(n)/log(5));
			for (ll i=1;i<=k;i++)
				zeros+=floor(n/pow(5,i));
			cout<<zeros<<endl;
		}
		return 0;
	}