#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int q,i,n;
		scanf("%lld",&q);
		while(q--)
		{
			cin>>n;
			long long int a[n],count=0,counto=0;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<n;i++)
			{
				if(i%2==0&&a[i]%2!=0)
				{
					count++;
				}
				if(i%2!=0&&a[i]%2==0)
				{
					counto++;
				}
			}
			if(count==counto&&count>=0)
			{
				printf("%lld\n",count);
			}
			else 
			{
				cout<<-1;
				printf("\n");
			}


		}
		return 0;
	}