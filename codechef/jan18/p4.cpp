#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,n;
		cin>>x>>n;
		ll a[n],s=0,half;
		for(ll i=0;i<n;i++){
			a[i]=i+1;
			if((i+1)==x)
				a[i]=0;
            s+=a[i];
		}
    	if(s%2!=0||((n-1)<=2))
            cout<<"impossible"<<endl;
        else{
            half=s/2;
            vector<ll> v;
            ll i=n-1;
            while(half!=0&&i>=0){
                if((half-a[i])>=0&&(i+1)!=x&&(half-a[i])!=x){
                    half-=a[i];
                    v.push_back(a[i]);
                } 
                i--;
            }
            ll j=v.size()-1;
            for(ll i=0;i<n;i++){
                if(a[i]!=v[j]){
                    if((i+1)==x)
                        cout<<"2";
                    else
                        cout<<"0";
                }
                if(a[i]==v[j]&&j>=0){
                    cout<<"1";
                    j--;
                }
            }
            cout<<endl;
        }
	}
	return 0;
}
