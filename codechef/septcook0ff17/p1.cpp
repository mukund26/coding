#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string s;
			cin>>s;
			int a[26];
			memset(a,0,sizeof(a));
			int l=s.length();
			int i,flag=0;
			for(i=0;i<l;i++)
			{
				a[s[i]-'a']++;
				if(a[s[i]-'a']>1){
					flag=1; break;
				}
			}
			if(flag==1)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		return 0;
	}