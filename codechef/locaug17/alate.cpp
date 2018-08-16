#include <bits/stdc++.h>
#define ll unsigned long long 
const unsigned long long int m=1000000007;
using namespace std;
int main()	
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll int n,i,q,x,y,type,f;
		scanf("%lld %lld",&n,&q);
		ll int a[n],sum[n],j;
		memset(sum,0,sizeof(sum));
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			j=1;
			while(j<=i)
			{
				if(i%j==0)
				{
					type=a[i]%m;
					ll int power=(type*type)%m;
					sum[j]+=power%m;
				}
				j++;
			}
		}
		while(q--)
		{
			scanf("%lld",&type);
			if(type==1)
			{
				scanf("%lld",&x);
				printf("%lld\n",sum[x]);
			}
			if(type==2)
			{
				scanf("%lld %lld",&x,&y);
				f=y%m;
				j=2;
				ll int op=(a[x]*a[x])%m;
				ll int np=(f*f)%m;
				sum[1]=(sum[1]-op+np)%m;
				while(j<=x)
				{
					if(x%j==0)
						sum[j]=(sum[j]-op+np)%m;
					j++;
				}
				a[x]=y;
			}
		}
	}
	return 0;
} 
