#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,q,max=-1,pos=-1;
	cin>>n>>q;
	ll a[n];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(max<=a[i]){
			max=a[i];
			pos=i;
		}
	}
	while(q--){
		ll type;
        cin>>type;
        if(type==1){
            ll x,y;
            cin>>x>>y;
            a[x]=y;
            if(max<y){
            	max=y;
            	pos=x;
            }
        }
        if(type==2){
        	ll c;
        	cin>>c;
        	if(max<c){
        		cout<<-1<<endl;
        	}
        	else
        	if(max>c){
        	for(ll i=1;i<=n;i++){
        		if(a[i]>c){
        			//ans=1;
        			cout<<i<<endl;
        			break;
        		}
        	}
        	}
        	else
        	cout<<pos<<endl; 
        }
	}
    
	return 0;
}
