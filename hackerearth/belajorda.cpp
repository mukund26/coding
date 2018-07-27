#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll a[n],s[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)
			s[i]=a[i];
		else
			s[i]=s[i-1]+a[i];
	}
	ll m=0,curr=0;
	for(ll i=0;i<n-1;i++){
		curr=s[i]*(s[n-1]-s[i]);
		if(m<curr)
			m=curr;
	}
	cout<<m<<endl;
	return 0;
}
