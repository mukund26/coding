#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,z;
		cin>>n;
		if(n==1)
			cout<<"1"<<endl;
		else 
		if(n==2)
			cout<<"1 2"<<endl;
		else
		if(n==3)
			cout<<"1 2 4"<<endl;
		else
		{
			cout<<"1 2 4 ";
			z=7;
			for(i=0;i<n-3;i++)
			{
				cout<<z+3<<" ";
				z+=3;
			}
			cout<<endl;
		}
	}
	return 0;
}