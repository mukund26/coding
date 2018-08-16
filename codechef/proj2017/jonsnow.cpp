#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			vector<ll int> a,b;
			ll int n,m,i,x,suma,sumb;
			scanf("%lld%lld",&n,&m);
			for(i=0;i<n;i++)
			{
				scanf("%lld",&x);
				a.push_back(x);
			}
			for(i=0;i<m;i++)
			{
				scanf("%lld",&x);
				b.push_back(x);
			}
			suma = std::accumulate(a.begin(), a.end(), 0);
			sumb = std::accumulate(b.begin(), b.end(), 0);
			if(suma>=sumb)
			{
				printf("Snow\n");
			}
			else
			{
				printf("Death\n");
			}
		}
		return 0;
	}