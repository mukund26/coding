#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int l,i,j;
			char ans;
			string a,b;
			int ar[27],br[27];
			memset(ar,0,sizeof(ar));
			memset(br,0,sizeof(br));
			int fa=0,fb=0,count_a=0,count_b=0;
			cin>>a>>b;
			l=a.length();
			for(i=0;i<l;i++)
			{
				ar[a[i]-'a']++;
				br[b[i]-'a']++;
			}
			for(i=0;i<27;i++)
			{
				if(ar[i]==0&&br[i]!=0)
				{
					count_b++;
					if(br[i]>fb)
						fb=br[i];
				}
				if(ar[i]!=0&&br[i]==0)
				{
					count_a++;
					if(ar[i]>fa)
						fa=ar[i];
				}
			}
			if(count_a==0)
				ans='B';
			else
			if(count_a>0 && fa>1)
				ans='A';
			else
			{
				if(count_b)
					ans='B';
				else
					ans='A';
			}
			cout<<ans<<endl;
		}

		return 0;
	}