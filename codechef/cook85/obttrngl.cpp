#include <bits/stdc++.h>
using namespace std;

int main()
	{
		long int t;
		scanf("%ld",&t);
		while(t--)
		{
			long long int k,a,b,count=0,diff;
			cin>>k>>a>>b;
			diff=abs(b-a);
			if(k%2==0)
			{
				if(diff==k/2)
				cout<<count<<endl;
				else
					if(diff<k/2)
					{
						count=abs(b-a)-1;
						cout<<count<<endl;
					}
				else
				{
					count=k-abs(b-a)-1;
					cout<<count<<endl;	
				}
			}
			else
			{
				if(diff<=k/2)
					{
						count=abs(b-a)-1;
						cout<<count<<endl;
					}
				else
				{
					count=k-abs(b-a)-1;
					cout<<count<<endl;	
				}
			}
		}
		return 0;
	}