#include<bits/stdc++.h>
using namespace std;

int main()
	{
		int n,i,j,count=0;
		scanf("%d",&n);
		char v[n],c[n];
		cin>>v;
		cin>>c;
		for(i=0;i<n;i++)
		{
			if(v[i]!=c[i]&&v[i]!='.')
			{
				count++;
			}
		}
		printf("%d\n",count);
		return 0;
	}