#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			long long int u,v,x;
			scanf("%lld%lld%lld",&u,&v,&x);
			double a;
			u=u+v;
			a=(double)x/u;
			printf("%0.12f\n",a);
		}
		return 0;
	}