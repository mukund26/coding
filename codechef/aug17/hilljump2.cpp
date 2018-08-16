#include <bits/stdc++.h>
using namespace std;

int main()
	{
		long int n,q,i,j,k,loc,r,x,t,l,count;
		cin>>n>>q;
		vector <long int> a[n+1];
		std::vector<long int> ::iterator *it;
		for(i=1;i<=n;i++)
		{
			cin>>t;
			a.push_back(t);
		}
		while(q--)
		{
			cin>>t;
			if(t==1)
			{
				cin>>i>>k;
				x=*it(i);
				loc=i;
				j=i+1;
				while(k&&j<=n)
				{
					if(x<a[j]&&abs(j-loc)<100)
					{
						x=a[j];
						loc=j;
						k--;
					}
					it=upper_bound(a.begin()+j+1, a.end(),x);
					j=it-a.begin();
				}
				cout<<loc<<endl;

			}
			if(t==2)
			{
				cin>>l>>r>>x;
				while(l<=r)
				{
					a[l]+=x;
					l++;
				}
			}
		}
		return 0;
	}