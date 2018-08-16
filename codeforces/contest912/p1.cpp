#include <bits/stdc++.h>
using namespace std;
typedef long long ll;	

int main(){
	ll a,b;
	cin>>a>>b;
	ll x,y,z,yellow,blue,ans=0;
	cin>>x>>y>>z;
	yellow=2*x+y;
	if(yellow>a)
		ans=yellow-a;
	blue=y+3*z;
	if(blue>b)
		ans+=(blue-b);
	cout<<ans<<endl;
	return 0;
}