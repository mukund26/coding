#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,i;
		cin>>n>>k;
		ll a[200001];
		memset(a,0,sizeof(a));
		ll b[n];
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			a[b[i]]++;
		}
		for(i=0;i<200001;i++)
		{
			if(k>0&&a[i]==0)
			{
				k--;
				a[i]++;
			}
			if(k==0&&a[i]==0)
			{
				cout<<i<<endl;
				break;
			}	
		}
	}
	return 0;
}