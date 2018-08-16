#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll good;

void bin_search(ll max[],ll a,ll l,ll r)
{
	ll m=(l+r)/2;
	if(r<l)
		return;
	if(max[m]<=a)
	{
		good=m;
		bin_search(max,a,l,m-1);
	}
	else
	{
		bin_search(max,a,m+1,r);
	}
}

int main()
	{
		ll n;
		cin>>n;
		ll a[n],max[n],m;
		vector<ll> vec[n+1];
		memset(max,-1,sizeof(max));
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i=0;i<n;i++)
		{
			ll l=0,r=n-1;
			good=n;
			bin_search(max,a[i],l,r);
			vec[good].push_back(a[i]);
			max[good]=a[i];
		}
		/*for(ll i=0;i<n;i++)
			cout<<max[i]<<" ";
		cout<<endl;*/
		for(int i=0;i<n;i++){
			for(int j=0;j<vec[i].size();j++){
				cout<<vec[i][j]<<" ";
			}
			cout<<endl;
			if(vec[i].size()==0)break;
		}
		
		return 0;
	}