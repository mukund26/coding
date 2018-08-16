#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll int m=1000000007;

ll int sum(ll int x,ll int a[],ll int n)
	{
		ll int s = 0 ,i;
		for(i=x;i<=n;i+=x)
		s + =  (a[i]*a[i])%m;
		return s;
	}

int main()	
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			ll int n,q,x,y,type;
			scanf("%lld %lld",&n,&q);

			ll int a[n],j,i;
			for(i=1;i<=n;i++)
			{
				scanf("%lld",&a[i]);
			}


			while(q--)
			{
				scanf("%lld",&type);

				if(type==1)
				{
					scanf("%lld",&x);
					printf("%lld\n",sum(x,a,n));
				}

				if(type==2)
				{
					scanf("%lld %lld",&x,&y);
					a[x]=y;
				}
			}
		}
		return 0;
	}