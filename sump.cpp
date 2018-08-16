#include<bits/stdc++.h>
using namespace std;

vector <long long int> v;

int main()
	{
		long long int n,i,x,sum=0;
		cin>>n;
		for(i=0;i<n;i++)
		{	
			cin>>x;
			v.push_back(x);
		}	
		sort(v.begin(),v.end());
		x=floor(n/3);
		cout<<x<<endl;
		for(i=0;i<x-1;i++)
		{	
			sum+=v[i];
		}
		cout<<sum<<endl;
		return 0;
	}
