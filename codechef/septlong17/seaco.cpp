#include <bits/stdc++.h>
using namespace std;
const long long int mod=1000000007;
#define ll long long int

ll a[100000],l[100000],r[100000],type[100000];

void type1(ll a[],ll x,ll y)
{
	for(ll j=x-1;j<=y-1;j++)
		a[j]=(a[j]+1)%mod;
} 

void type2(ll a[],ll x,ll y)
{
	for(ll j=x-1;j<=y-1;j++)
	{
		if(type[j]==1)
			type1(a,l[j],r[j]);
		if(type[j]==2)
			type2(a,l[j],r[j]);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll i=0;
		memset(a,0,sizeof(a));
		while(m--)
		{
			cin>>type[i]>>l[i]>>r[i];
			//cout<<l[i]<<" "<<r[i]<<endl;
			if(type[i]==1)
			{
				type1(a,l[i],r[i]);
			}
			
			if(type[i]==2)
			{
							
				type2(a,l[i],r[i]);
			} 
			i++;
		}
		for(ll k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}
	return 0;
}