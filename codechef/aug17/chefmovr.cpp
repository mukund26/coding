#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			ll int n,d,ans=-1;
			scanf("%lld%lld",&n,&d);
			ll int a[n],i,sum=0,flag=0,avg=0,j,demand;
			for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);
				sum+=a[i];
			}
			if(sum%n==0)//check distributability
			{
				avg=sum/n;
				ans=0;
				for(i=0;i<d;i++)
				{
					for(j=i;j<n;j+=d){
						demand=avg-a[j];
						ans+=abs(demand);
						if(j+d>=n){//going out i.e last elem
							if(demand!=0){
								ans=-1;
								break;
							}
						}
						else
						a[j+d]-=demand;
					}
					if(ans==-1) break;
				}
			}//end if
			cout<<ans<<endl;
		}
		return 0;
	}