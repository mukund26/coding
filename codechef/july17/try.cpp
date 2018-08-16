#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
	{
		ll int t;
		scanf("%lld",&t);
		while(t--)
		{
			ll int n,b;
			scanf("%lld%lld",&n,&b);
			ll int c,d,x,y;
			y=n/2;	
			if(y%b!=0)
			{
				x=y%b;
				x=b-x;
				y=y+x;
			}
			c=n-y;
			d=(c*(y/b));
			printf("%lld\n",d);
		}
	}