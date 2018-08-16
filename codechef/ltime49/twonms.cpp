#include<bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			long long int a,b,n,ma,mi;
			lldiv_t di;
			scanf("%lld%lld%lld",&a,&b,&n);
				if(n%2==0)
				{
					ma=max(a,b);
					mi=min(a,b);
					di=div(ma,mi);
					cout<<di.quot<<endl;
				}
				else
				{
						a*=2;
						ma=max(a,b);
						mi=min(a,b);
						di=div(ma,mi);
						cout<<di.quot<<endl;
					
				}	
		}
		return 0;
	}