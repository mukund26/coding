#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000007

ll modular_exp(ll x,ll n,ll mod){
	ll a=1;
	while(n){
		if(n%2) a=((__int128)a*x)%mod;
		n>>=1;
		x=((__int128)x*x)%mod;
	}
	return a;
}

ll gcd(ll a,ll b){
	return b==0 ? a : gcd(b,(a%b));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		ll A=modular_exp(a,n,INF),B=modular_exp(b,n,INF);
		ll s=(A+B)%INF;
		if(a==b)
			cout<<s<<endl;
		else{
			ll dif = abs(a-b);
			ll r = (modular_exp(a,n,dif)+modular_exp(b,n,dif))%dif;
			cout<<gcd(r,dif)%INF<<endl;
		}
	}	
	return 0;	
}










