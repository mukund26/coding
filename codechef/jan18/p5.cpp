//recursion / dp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b;

bool total(char a,char b){
    return (a!=b)?true:false;
}

ll repeat(ll i,ll j,ll count){
    if(i==0){
        i++;
    }
    if(A[i]==A[i-1]){
        repeat(i++,j,count);
    }
    if(A[i]!=A[i-1]){
        if(total(A[i],B[j]))
            count++;
        repeat(i,j++,count);
    }
    if(B[j]==A[i-1])
        repeat(i,j++,count);
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i=0,j=0,k=0,count=1;
        cin>>n>>m;
        
        cin>>a;
        cin>>b;
        count=repeat(0,0,1);
       // cout<<c[0]<<" ";
        /*for(k=1;k<n+m;k++){
           // cout<<c[k]<<" ";
            if(c[k]!=c[k-1])
                count++;
        }*/
        //cout<<endl;
        cout<<count<<endl;
    }
    return 0;
}
