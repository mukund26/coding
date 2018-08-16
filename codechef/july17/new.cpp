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
			ll int c=0,d=0,y=0,max=0;
			c=n-b;
			while(y<=c+b)
			{
				y=n-c;
				d=(c*(y/b));
				if(max<d)
				{
					max=d;
				}
				cout<<c*y<<endl;
				c-=b;
			}
			printf("%lld\n",max);
		}
	}