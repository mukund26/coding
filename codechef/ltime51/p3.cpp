#include<bits/stdc++.h>
using namespace std;

int main()
	{
    	int t,sx,sy,r,c,n;
	    cin>>t;
		while(t--)
		{
			int x[n],y[n],max=0,sum=0;
			cin>>r>>c>>n;
			cin>>sx>>sy;
			int a[r][c];
			for(i=0;i<n;i++)
				cin>>x[i];
			for(i=0;i<n;i++)
				cin>>y[i];
			for(i=0;i<r;i++){
				for(j=0;j<c;j++)
				{
					cin>>a[i][j];
				}
			}
			sum=a[sx][sy];
			for(i=0;i<n;i++)
			{
				max=a[sx-x[i]][sy-y[i]]>a[sx+x[i]][sy+y[i]]?a[sx-x[i]][sy-y[i]]:a[sx+x[i]][sy+y[i]];
				for(j=i+1;j<n;j++)
				{
					if(max<=a[sx-x[j]][sy-y[j]])
					{
						max=a[sx-x[j]][sy-y[j]];
					}
					if(max<=a[sx+x[j]][sy-y[j]])
					{
						max=a[sx+x[j]][sy-y[j]];
					}
					if(max<=a[sx+x[j]][sy+y[j]])
					{
						max=a[sx+x[j]][sy+y[j]];
					}
					if(max<=a[sx-x[j]][sy+y[j]])
					{
						max=a[sx-x[j]][sy+y[j]];
					}
				}
				sum+=max;
				sx=

			}
				
		}
	    return 0;
	}
