#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()	
{
	int q;
	cin>>q;
	while(q--)
	{
		long long int i,n,k,pos,temp,s=(1<<n),orig=0,npos,st=0;
		cin>>n>>k;
		npos=k;
		for(i=0;i<n;i++)
		{
			if(npos%2==0)
			{
				orig=st+npos/2;
				npos/=2;
			}
			else
			{
				npos/=2;
				st+=((ll int)pow(2,n-i))/2;
				orig=st+npos;
			}
		}
		cout<<orig<<endl;
	}
	return 0;
}