#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll int mod=1000000007;


int main()
{
	ll int t;
	scanf("%lld",&t);
	while(t--)
	{
		ll int n,m,a,r,min=1,sum;
		scanf("%lld%lld",&n,&m);
		n%=mod;
		m%=mod;
		a=(n*(n+1))/2;
		if(a>=m)
		{
			r=1;
			sum=0;
			while(r<=n)
			{
				sum+=r;
				if(sum>=m)
				{
					min=r;
					break;
				}
				else
				{
					r++;
				}
			}
			cout<<min<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}