#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		lli n,r;
		cin>>n>>r;
		lli a[n];
		bool flag=true;
		for(lli i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			if(a[0]==r) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else{
			lli right=1000000007,left=0;
			if(a[0]>r){
				right=a[0];
			}
			if(a[0]<r){
				left=a[0];
			}
			for(lli i=1;i<n;i++){
				if(a[i]>r){
					if(a[i]>left&&a[i]<right){
						right=a[i];
						flag=true;
					}
					else{
						flag=false;
						break;
					}
				}
				if(a[i]<r){
					if(a[i]<right&&a[i]>left){
						left=a[i];
						flag=true;
					}
					else{
						flag=false;
						break;
					}
				}
			}
			if(flag) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}	
	}
	return 0;
}