#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000007

int scan(){
    	register int c = getchar_unlocked();
        register int n = 0;
        register int neg=0;
        for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
        if(c=='-') {
        	neg=1; c=getchar_unlocked();
        }
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        if(neg) return -n;
        else return n;
}
/*
ll modular_exp(ll x,ll n){
	if(n==0)
		return 1;
	else if(n%2==0)
		return modular_exp((x*x)%INF,n/2);
	else
		return (x*modular_exp((x*x)%INF,(n-1)/2))%INF;
}*/

ll modular_exp(ll x, ll n){
    ll a=1;
    while(n){
        if(n%2) a*=x; 
        n>>=1;
        x*=x;
    }
    return a;
}

int main(){
	ll n=scan();
	ll x=scan();
	cout<<modular_exp(x,n)<<endl;
	return 0;
}
