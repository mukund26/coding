#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
	{
		ll t;
		cin>>t;
		while(t--)
		{
			ll n;
			int ans=1;
			cin>>n;
			int a[5];
			memset(a,0,sizeof(a));
			while(n--)
			{
				string s;
				cin>>s;
				if(s=="cakewalk")
				{
					a[0]++;
				}
				if(s=="simple")
				{
					a[1]++;
				}
				if(s=="easy")
				{
					a[2]++;
				}
				if(s=="easy-medium"||s=="medium")
				{
					a[3]++;
				}
				if(s=="medium-hard"||s=="hard")
				{
					a[4]++;
				}
			}
			
			for(int i=0;i<5;i++)
				if(a[i]==0)
				{
					ans=-1;
					break;
				}

			if(ans==1)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}