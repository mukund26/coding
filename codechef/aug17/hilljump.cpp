#include <bits/stdc++.h>
using namespace std;

int main()
	{
		long long int n,q,i;
		cin>>n>>q;

		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];

		while(q--)
		{
			int t;
			cin>>t;
			if(t==1)
			{
				long long int s,k,ar,prev,loc,j;
				cin>>s>>k;
				ar=a[s-1];
				prev=s-1;
				loc=s-1;
				for(j=s; j<n && k>0;j++)
				{
					if(a[j]>ar)
					{
						prev=loc;
						ar=a[j];
						k--;
						loc=j;
					}
					if((loc-prev)>100)
					{
						loc=prev;
						break;
					}
				}
				cout<<loc+1<<endl;

			}
			if(t==2)
			{
				int l,r;
				long long int x;
				cin>>l>>r>>x;
				while(l<=r)
				{
					a[l-1]+=x;
					l++;
				}
			}
		}
		return 0;
	}