#include <bits/stdc++.h>
using namespace std;

int main()	
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,price=0,a[26];
		string s;
		int alpha[26];
		memset(alpha,0,sizeof(alpha));
		for(i=0;i<26;i++ )
		{
			cin>>a[i];
		}
		cin>>s;
		n=s.length();
		for(i=0;i<n;i++)
		{
			alpha[s[i]-'a']++;
		}
		for (i = 0; i < 26; i++)
		{
			if(alpha[i]==0)
			{
				price+=a[i];
			}
		}
		cout<<price<<endl;

	}
	return 0;
}