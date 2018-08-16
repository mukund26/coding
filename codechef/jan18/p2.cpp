#include <bits/stdc++.h>
using namespace std;
typedef long long ll;	
ll good;

void binarysearch(vector < ll > a,ll low,ll high, ll x)
{
        int mid=(low+high)/2;
        if(low>high)
                return;
        if(a[mid]<x)
        {
                good=mid;
                binarysearch(a,mid+1,high,x);
        }
        if(a[mid]>=x)
                binarysearch(a,low,mid-1,x);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,input;
		cin>>n;
		ll max_sum=0,ans=1,max;
		vector< vector < ll >  > v(n);
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				cin>>input;
				v[i].push_back(input);	
			}
			sort(v[i].begin(),v[i].end());
		}
		if(n==1)
			cout<<v[0][0]<<endl;
		else{
			max_sum+=v[n-1][n-1];
			for(ll i=n-2;i>=0;i--){
				good=-1;
				if(i==n-2)
					binarysearch(v[i],0,n-1,v[n-1][n-1]);
				else
					binarysearch(v[i],0,n-1,max);
				if(good!=-1){
					max_sum+=v[i][good];
					max=v[i][good];
				}
				else{
					ans=0;
					break;
				}
			}
			if(ans)
				cout<<max_sum<<endl;
			else
				cout<<"-1"<<endl; 
		}
	}
	return 0;
}