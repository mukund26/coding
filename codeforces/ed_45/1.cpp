#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector < ii > vii;
typedef vector <int> vi;
#define INF 1000000000

ll readInt (){
    bool minus = false;
    ll result = 0;
    char ch;
    ch = getchar();
    while (true){
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (true){
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}


int main(){
	ll n=readInt();
    ll m=readInt();
    ll a=readInt();
    ll b=readInt();
    ll x,y,mo;
    mo=n%m;
    if(mo){
    x=(m-mo)*a;
    y=mo*b;
    if(x>y) cout<<y<<endl;
    else cout<<x<<endl;
    }
    else{
        cout<<0<<endl;
    }
	return 0;
}
