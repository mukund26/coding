#include<iostream>
#include<map>
#include<stdio.h>
#include <cstring>
using namespace std;

typedef long long ll;
typedef pair <ll,ll> ii;
//typedef vector< ii > vii;
//typedef vector <ll> vi;

ll scan(){
    	register ll c = getchar_unlocked();
        register ll n = 0;
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        return n;
}

map<ll,ll> m; //a[i] and its first index
map<ll,ll> m2,m3; //index and count 
ll b[1000001];
ll c[1000001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n,x;
	n=scan();
	ll a[n];
	map<ll,ll> :: iterator itr;
	memset(b,-1,sizeof(b));	memset(c,-1,sizeof(c));
	for(int i=0;i<n;i++){
	    a[i]=scan();
	    if(m.find(a[i])==m.end())
	    m[a[i]]=i;
	    m2[m[a[i]]]++;
	}
	int ma=-1;
	for(itr=m2.begin();itr!=m2.end();itr++){
		if(b[itr->second]==-1){
			b[itr->second]=itr->first;
		}
		if(ma<itr->second){
		    ma=itr->second;
		    c[ma]=itr->first;
		}
	}
	x=c[ma];
	for(int i=ma-1;i>=0;i--){
		if(c[i]==-1){
			c[i]=x;
		}
		else{
			x=c[i];
		}
	}
	int q;
	q=scan();
	while(q--){
	    ll type,digit;
	    type=scan();
	    digit=scan();
	    if(digit>ma){
	        printf("0\n");
	        continue;
	    }
	    if(type==0){
	           	printf("%lld\n",a[c[digit]]);
	    }
	    if(type==1){
	       	    if(b[digit]!=-1) {printf("%lld\n",a[b[digit]]);}
	       	    else  printf("0\n");
	    }
	}
	return 0;
}