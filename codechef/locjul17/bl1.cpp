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
		ll int n,m,a,min=0;
		scanf("%lld%lld",&n,&m);
		n%=mod;
		m%=mod;
		a=(n*(n+1))/2;
		if(a>=m)
		{
			a=ceil((sqrt(1+8*m)-1)/2);
			printf("%lld\n",a);
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}