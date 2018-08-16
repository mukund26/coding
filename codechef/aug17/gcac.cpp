#include <bits/stdc++.h>
using namespace std;

#define ll long long 

struct Std
{
	ll int minsal;
	ll int placed;
	Std()
	{
		minsal=0;
		placed=0;
	}
};

struct Comp
{
   ll int hired;
   ll int maxjob;
   ll int saloff;
   ll int pos;
   Comp()
   {
   	pos=0;
   	hired=0;
   	maxjob=0;
   	saloff=0;
   }	
};

bool compare(Comp a,Comp b)
	{
		return a.saloff > b.saloff;
	}


int main()
	{
		int t,n,m;
		ll int sum;
		int selec,regect;
		cin>>t;
		while(t--)
		{
			ll int i,j,k;
			string data;
			cin>>n>>m;
			Std std[n+1];
			Comp comp[m+1];
			for(i=1;i<=n;i++)
				cin>>std[i].minsal;

			for(i=1;i<=m;i++)
			{
				cin>>comp[i].saloff>>comp[i].maxjob;
				comp[i].pos=i;
			}
			sort(comp+1,comp+m+1,compare);
			sum=0;
			selec=0;
			for(i=1;i<=n;i++)
			{
				cin>>data;
				for(int j=1;j<=m;j++)
				{
					k=comp[j].pos-1;
					if(data[k]=='1' && std[i].minsal<=comp[j].saloff )
					{
						if(comp[j].maxjob>comp[j].hired)
						{
							std[i].placed=1;
							sum+=comp[j].saloff;
							comp[j].hired++;
							selec++;
							break;
						}
					}
				}
			}
			
			regect=0;
			for(i=1;i<=m;i++)
			{
				if(comp[i].hired==0)
					regect++;
			}
			cout<<selec<<" "<<sum<<" "<<regect<<endl;
					
		}
		return 0;
	}//oneisgodo@1