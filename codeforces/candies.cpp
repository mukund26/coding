#include <iostream>
using namespace std;

int main()
	{
		int n,k,i,cand=0;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]<=8)
				cand+=a[i];
			if(a[i]>8&&i<n-1)
			{
				cand+=8;
				a[i+1]+=a[i]-8;
			}
			if(a[i]>8&&i==n-1)
			{
				cand+=8;
			}
			if(cand>=k)
				break;
		}
		if(cand>=k)
		{
			cout<<i+1<<endl;
		}
		else
			cout<<-1<<endl;
		return 0;
	}