#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,d,ans=0;
		cin>>a>>b>>c>>d;
		if(a==b){
			if(c==d){
				ans=1;
				
			}
		}
		else
		if(a==c){
			if(b==d)
				ans=1;
		}
		else
		if(a==d){
			if(b==c)
				ans=1;
		}
		if(ans==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}