#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			std::vector<int> v,v1;
			int n,i,x,flag=1,max;
			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>x;
				v1.push_back(x);
				v.push_back(x);
			}
			reverse(v.begin(),v.end());
			max=*max_element(v.begin(),v.end());
			if(v[n/2]==7&&v[0]==1&&max==7)
			{
				
				for(i=0;i<n;i++)
				{
					if(v1[i]!=v[i])
					{
						flag=0;
						break;
					}
				}
				if(flag==0)
					cout<<"no"<<endl;
				else
					cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
		return 0;
	}