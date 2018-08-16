#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int n;
		cin>>n;
		int a[n],d=0,flag=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		d=a[1]-a[0];
		for(int i=2;i<n;i++)
		{
			if(d!=a[i]-a[i-1])
				{  flag=1; break;}
		}
		if(flag==0)
			cout<<a[n-1]+d<<endl;
		else
			cout<<a[n-1]<<endl;
		return 0;
	}