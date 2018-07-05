#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

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

ll solve(ll n){
	if(n<=9)
		return n;
	else
		return (n%9+10*solve(n/9));
}

int main(){
	ll n;
	while(cin>>n){
	//	int n=scan();
		cout<<solve(n)<<endl;
	}
	return 0;
}
