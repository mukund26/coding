#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			cout<<endl;
			int ng,nw;
			cin>>ng>>nw;
			int ngl[ng],nwl[nw],maxg=0,maxw=0;
			for(int i=0;i<ng;i++)
			{
				cin>>ngl[i];
				if(ngl[i]>=maxg)
					maxg=ngl[i];
			}
			for(int i=0;i<nw;i++){
				cin>>nwl[i];
				if(nwl[i]>=maxw)
					maxw=nwl[i];
			}
			if(maxg>=maxw)
				cout<<"Godzilla"<<endl;
			else
				cout<<"MechaGodzilla"<<endl;
		
		}
		return 0;
	}