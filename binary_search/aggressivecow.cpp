#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000005],n,c;
ll good;

bool insert_now(ll num)
	{
		ll count=1,i=0,temp=a[0];
		while(i<n)
		{
			if(a[i]-temp>=num){
				count++;
				temp=a[i];
			}
			i++;
		}
		//cout<<num<<" "<<count<<endl;
		if(count>=c)
			return true;
		else
			return false;
	}

void binsearch(ll min, ll max)
	{
		
		ll mid=(max+min)/2;
		//cout<<min<<" - "<<max<<endl;
		if(min>max)
		{
			return;
		}
		if(insert_now(mid))
		{
			good=mid;
			binsearch(mid+1,max);
		}
		else
		{
			binsearch(min,mid-1);
		}

	}

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			cin>>n>>c;
			for(ll i=0;i<n;i++)
				cin>>a[i];
			sort(a,a+n);
			good=1;
			ll max=a[n-1]-a[0],min=1;
			binsearch(min,max);
			cout<<good<<endl;
		} 
		return 0;
	}