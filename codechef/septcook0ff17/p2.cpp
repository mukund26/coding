#include <bits/stdc++.h>
using namespace std;


int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int i,x;
			x=n/2+n%2;
			for(i=1;i<=n;i++)
			{
				cout<<x++<<" ";
			}
			cout<<endl;
		}		
		return 0;
	}