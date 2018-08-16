#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		double sq=sqrt(2);
		scanf("%d",&t);
		while(t--)
		{
			int n,v1,v2;
			double val;
			cin>>n>>v1>>v2;
			val=(double)v2/(double(v1)*sq);
			//cout<<val<<endl;
			if(val<1.0)
			{
				cout<<"Stairs"<<endl;
			}
			else
			{
				cout<<"Elevator"<<endl;
			}
		}
		return 0;
	}