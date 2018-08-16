#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			long long int n,q,x,count=1,left=0,right=0;
			cin>>n>>q;
			long long int *a,i,c;
			char ch;
			while(q--)
			{
				cin>>ch;
				if(ch=='!')
				{
					cin>>c;
					x=(0+pow(2,c))%pow(2,n);
					std::string binary = std::bitset<8>(x).to_string();
				}
				else
				{

				}

			}

		}
		return 0;
	}