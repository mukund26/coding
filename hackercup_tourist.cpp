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

int main(){
    int t = scan();
    ll n,k,v;
    unorderedmap <string,int> m;
    unorderedmap <int,int> m2;
    while(t--){
        cin>>n>>k>>v;
        string s;
        for(ll i=0;i<n-1;i++){
            cin>>s;
            //m.insert(pair<string,int>(s,i));
            m.insert(pair<int,int>(i,0));
        }
        int loc=0;
        for(ll j=0;j<v-1;j++)
        for(ll i=0;i<k;i++){
            m[loc]++;
            loc=(loc+1)%n;
        }
    }
    return 0;
}

/*
for(auto x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }
*/