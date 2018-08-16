#include <bits/stdc++.h>
using namespace std;

int s;

int good;

void bin_search(int a[],int l,int r)
{
	int m = (l+r)/2;
	if(r<l)//end condition
		return;
	if(a[m]<s)//good but greedy
	{
		good = m;
		bin_search(a,m+1,r);
	}
	else//bad and still finding
	{
		bin_search(a,l,m-1);
	}
	
}

int main()
	{
		int n;
		cin>>n;
		int a[n+1];
		a[0]=-1;
		for(int i=1;i<n+1;i++)
			cin>>a[i];
		cin>>s;
		int mid;
		sort(a,a+n+1);
		good=n;
		bin_search(a,0,n);
		cout<<a[good]<<endl;
		return 0;
	}