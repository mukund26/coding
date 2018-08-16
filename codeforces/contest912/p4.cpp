#include <bits/stdc++.h>
using namespace std;
typedef long long ll;	

int main(){
	ll n,m,r,k;
	cin>>n>>m>>r>>k;
	ll ans,x=max(0,n-2*(r-1)),y=max=(0,m-2*(r-1));
	ll number=max(k,x*y)*r*r;
	k-=number;
	while(k){
		number+=2*x+2*y+2*r-1;
		k-=(2*x+2*y+2*r-1);
	}
	return 0;
}