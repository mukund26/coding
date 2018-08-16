#include<bits/stdc++.h>
using namespace std;


int main()
	{
		long long int t;
		cin>>t;
		while(t--)
		{
			long long int n,s;
			cin>>n>>s;
			long long int i,a,k,m=n,found=0;
			vector <long long int> v;
			for(i=0;i<n;i++)
			{
				cin>>a;
				v.push_back(a);
			}
			sort(v.begin(),v.end());
			for(i=0;i<n;i++)
			{
				if(m*v[i]==s)
				{
					k=v[i];
					found=1;
					break;
				}
				else
				{
					m--;
					s-=v[i];
				}
			}
			if(found==1)
				cout<<k<<endl;
			else
				cout<<-1<<endl;

		}
		return 0;
	}