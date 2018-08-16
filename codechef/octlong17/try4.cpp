#include <bits/stdc++.h>
#define ll long int
using namespace std;
int a[2];

void print(ll x,ll y)
{
	ll setx=ceil(a[0]/x),sety=ceil(a[1]/y);
	ll gap,extra;
	string str;

	if(setx>=sety)
	{
		gap=setx-1;
		extra=a[1]-gap;

		for(ll i=0;i<x;i++)
			str+='a';

		a[0]-=x;

		while(a[0]||a[1])
		{
			if(a[1])
			{
				if(gap)
				{
					str+='b';
					gap--;
					a[1]--;
					ll j=y-1;
					while(extra&&j)
					{
						str+='b';
						extra--;
						a[1]--;
						j--;
					}
				}
				else
				{
					ll j=y;
					while(extra&&j)
					{
						str+='b';
						extra--;
						a[1]--;
						j--;
					}
				}
			}

			else str+='*';

			if(a[0]>=x)
			{

				for(ll i=0;i<x;i++)
					str+='a';

				a[0]-=x;
			}

			else
			{

				for(ll i=0;i<a[0];i++)
					str+='a';

				a[0]=0;
			}
		}
	}

	else
	{
		gap=sety-1;
		extra=a[0]-gap;

		for(ll i=0;i<y;i++)
			str+='b';

		a[1]-=y;

		while(a[0]||a[1])
		{
			if(a[0])
			{
				if(gap)
				{
					str+='a';
					gap--;
					a[0]--;
					ll j=x-1;
					while(extra&&j)
					{
						str+='a';
						extra--;
						a[0]--;
						j--;
					}
				}
				else
				{
					ll j=x;
					while(extra&&j)
					{
						str+='a';
						extra--;
						a[0]--;
						j--;
					}
				}
			}

			else str+='*';

			if(a[1]>=y)
			{

				for(ll i=0;i<y;i++)
					str+='b';

				a[1]-=y;
			}

			else
			{
				for(ll i=0;i<a[1];i++)
					str+='b';

				a[1]=0;
			}

		}
	}

	cout<<str;
}

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string s;
			cin>>s;
			ll x,y;
			cin>>x>>y;
			memset(a,0,sizeof(a));
			for(ll i=0;i<s.length();i++)
				a[s[i]-'a']++;
			print(x,y);
			cout<<endl;
		}
		return 0;
	}