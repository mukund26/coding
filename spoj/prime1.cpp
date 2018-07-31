#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long int t;
		cin>>t;
		while(t--)
		{
			long long int m,n,count=0,i;
			scanf("%lld%lld",&m,&n);
			while(m<=n)
			{
				if(m==1)
					count=1;
				else
				{
					count=0;
				}
				for(i=2;i*i<=m;i++)
				{
					if(m%i==0)
					{
						count++;
						break;
					}
				}
				if(count==0)
				{
					cout<<m<<endl;
				}
				m++;
			}
			cout<<endl;
		}

		return 0;	
	}	
