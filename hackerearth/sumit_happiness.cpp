#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1000000000

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n],total=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			total+=a[i];
		}
		if(total>0)
			total*=n;
		ll x=0,s=0,z=0,m=0;
		for(ll i=0;i<n;i++){
			s+=a[i];
			m=max(s*(i+1),m+a[i]);
			//cout
		}
		if(m>total)
		cout<<m<<endl;
		else
			cout<<"1. "<<total<<endl;
	}	
	return 0;
}
