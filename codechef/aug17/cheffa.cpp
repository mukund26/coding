#include <bits/stdc++.h>
#define ui long long int
using namespace std;

int arr[100];

ui fa(int ind,int a,int b){
	if(a==0 && b==0) return 1;

	int minn=min(a,b);
	int c=arr[ind+2];
	ui sum=0;

	for(int i=minn;i>=0;i--){
		sum+=fa(ind+1,b-(minn-i),c+(minn-i));
	}

	return sum;
}

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n,i,j,count=0,k;
			cin>>n;
			
			memset(arr,0,sizeof(arr));
			for(i=1;i<=n;i++)
			{
				cin>>arr[i];
			}	

			cout<<fa(1,arr[1],arr[2])<<endl;
		}
		return 0;
	}