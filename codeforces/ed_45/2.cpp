#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
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
    ll k=readInt();
    ll a[n];
    for(ll i=0;i<n;i++) a[i]=readInt();
    sort(a,a+n);
    ll last=0,j;
    for(ll i=1;i<n;i++){
        j=last;
        if(a[i]>a[j]+k){
            last++;
            continue;
        }
        while(a[i]<=a[j]+k){
            a[j]=0;
            last=j;
            j++;
            if(j>=i){
                break;
            }
        }
        last++;
    }  
    ll count=0;
    for(ll i=0;i<n;i++){
       //cout<<a[i]<<" ";
        if(a[i]!=0)
            count++;
    }  
    cout<<count<<endl;
	return 0;
}
