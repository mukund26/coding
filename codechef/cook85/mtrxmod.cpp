#include <bits/stdc++.h>
using namespace std;

int main()
	{
		long int n,q;
		scanf("%ld%ld",&n,&q);
		long int b[n+1][n+1],f[n+1],i,j,a[n+1];
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>b[i][j];
		long long int y,m,l;
		int flag;

		for(i=1;i<=n;i++)
		{
			flag=0;
			y=b[i][1];
			m=-y;
			a[i]=m;
			for(l=2;l<=i;l++)
			{
				if(b[i][l]!=abs(a[i]-a[l]))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				a[i]=y;
	}

		for(i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		
		while(q--)
		{
			int p;
			cin>>p;	
			for(i=1;i<=n;i++)
			{
				cin>>f[i];
				b[p][i]=f[i];
				b[i][p]=f[i];
			}

			for(i=1;i<=n;i++)
		{
			flag=0;
			y=b[i][1];
			m=-y;
			a[i]=m;
			for(l=2;l<=i;l++)
			{
				if(b[i][l]!=abs(a[i]-a[l]))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				a[i]=y;
	}

			for(i=1;i<=n;i++)
				cout<<a[i]<<" ";
			
			cout<<endl;

		}
		
		return 0;
	}