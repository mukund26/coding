#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,n,ans=0;
        cin>>a>>n;
        ll s[n];
        for(ll i=0;i<n;i++){
        	cin>>s[i];
        	a&=s[i];
        	if(a==0)
        		ans=1;
        }
        if(ans==0)
        	cout<<"NO"<<endl;
        if(ans==1)
        	cout<<"YES"<<endl;
	}	
	return 0;
}
