#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        char ans;
        ll ch=0;
        while(1){
            ll p=log2(k);
            ll in=pow(2,p);
            ll x=k-in;
            if(x==0){
                if(ch%2==0)
                    ans='a';
                else ans='c';
                break;
            }
            in=in-x;
            ch++;
            if(in==1 || in==2){
                if(ch%2==0)
                    ans='a';
                else ans='c';
                break;
            }else if(in==3){
                if(ch%2==0)
                    ans='c';
                else ans='a';
                break;
            }
            k=in;
        }
        cout<<ans<<"\n";
    }
}
 