#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,count=0,countb=0;
	cin>>n;
	while(n--){
		ll a,b;
        cin>>a>>b;
        if(a<0)
            count++;
        if(a>0)
            countb++;
	}
    cout<<count<<" "<<countb<<endl;
	return 0;
}
