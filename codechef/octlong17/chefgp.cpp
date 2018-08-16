#include <bits/stdc++.h>
#define ll long int
using namespace std;
int a[2];

void print(ll x,ll y)
{
	ll gap,extra,setx,sety,value_a,remainder_a;
	string str,amain,amin,bremain;
	setx=ceil(float(a[0])/x);
	sety=ceil(float(a[1])/y);
	
	if(setx>=sety)
		{
			gap=setx-1;
			extra=a[1]-gap;
			value_a=a[0]/x;
			remainder_a=a[0]%x;

			for(ll i=0;i<x;i++)
				amain+='a';

			for(ll i=0;i<remainder_a;i++)
				amin+='a';

			if(a[1]>=gap) { 

				int z[gap]; 
				memset(z,0,sizeof(z));
				//cout<<z[0]<<endl;
				if(extra)
				{
					for(ll i=0;(i<gap)&&extra;i++)
					{
						if(extra>=y)
						{
							z[i]=z[i]+y-1;
							extra=extra-y+1;
						}
						else
						{
							z[i]+=extra;
							extra=0;
						}
					}
				}

				if(extra)
				{
					for(ll i=0;i<extra;i++)
						bremain+='b';
				}

				str+=amain;
				value_a--;
				//cout<<str<<" 1"<<endl;

				for(ll i=0;i<gap;i++)
				{
					for(ll j=0;j<=z[i];j++)
						str+='b';

					//cout<<i<<"- "<<str<<endl; 
					if(value_a)
					{
						str+=amain;
						value_a--;
					}
				}

				str+=amin;
				str+=bremain;

			}
			else {
				// int z[a[1]];
				//memset(z,0,sizeof(z));

				str+=amain;
				value_a--;

				for(ll i=0;i<gap;i++)
				{
					if(a[1]){
						str+='b';
						a[1]--;
					}
					else
					{
						str+='*';
					}
					//cout<<i<<"- "<<str<<endl; 
					if(value_a)
					{
						str+=amain;
						value_a--;
					}
				}
				if(remainder_a){
					str+=amin;
				}

			 }
		}
	else
	{
			gap=sety-1;
			extra=a[0]-gap;
			value_a=a[1]/y;
			remainder_a=a[1]%y;

			for(ll i=0;i<y;i++)
				amain+='b';

			for(ll i=0;i<remainder_a;i++)
				amin+='b';

			if(a[0]>=gap) { 

				int z[gap]; 
				memset(z,0,sizeof(z));
				//cout<<z[0]<<endl;
				if(extra)
				{
					for(ll i=0;(i<gap)&&extra;i++)
					{
						if(extra>=x)
						{
							z[i]=z[i]+x-1;
							extra=extra-x+1;
						}
						else
						{
							z[i]+=extra;
							extra=0;
						}
					}
				}

				if(extra)
				{
					for(ll i=0;i<extra;i++)
						bremain+='a';
				}

				str+=amain;
				value_a--;
				//cout<<str<<" 1"<<endl;

				for(ll i=0;i<gap;i++)
				{
					for(ll j=0;j<=z[i];j++)
						str+='a';

					//cout<<i<<"- "<<str<<endl; 
					if(value_a)
					{
						str+=amain;
						value_a--;
					}
				}

				str+=amin;
				str+=bremain;

			}
			else {
				// int z[a[1]];
				//memset(z,0,sizeof(z));

				str+=amain;
				value_a--;

				for(ll i=0;i<gap;i++)
				{
					if(a[0]){
						str+='a';
						a[0]--;
					}
					else
					{
						str+='*';
					}
					//cout<<i<<"- "<<str<<endl; 
					if(value_a)
					{
						str+=amain;
						value_a--;
					}
				}
				if(remainder_a){
					str+=amin;
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