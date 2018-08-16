#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long t;
		cin>>t;
		while(t--)
		{
			long long int a,b,m,amod,c;
			cin>>a>>b>>m;
			amod=a%m;
			if(amod != 0)
  			a+= (m-amod);
  			b -= b % m;
  			c= (b-a)/m + 1;
  			cout<<c<<endl;
		}
		return 0;
	}