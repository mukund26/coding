#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int m,x=0,y=0,n;
		scanf("%lld",&m);
		if(m%2==0)
		{
			n=m/2;
			x=x+n;
			y=y+n;
		}
		else
		{
			n=m/2;
			x=x+n;
			y=y+(m-n);
		}
		printf("%lld %lld\n",x,y);
	}
	return 0;
}