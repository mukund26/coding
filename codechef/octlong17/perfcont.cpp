#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		ll  a[n],c=0,h=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=(p/2))
				c++;
			if(a[i]<=(p/10))
				h++;
		}
		if(c==1&&h==2)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}