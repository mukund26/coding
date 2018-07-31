#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1000000000

int main(){
	ll n;
	cin>>n;
	ll a[n],x[n],y[n];
	for (ll i = 0; i < n; i++){
		cin>>a[i];
	}
	x[0]=-1;
	ll f=-1;
	for(ll i=1;i<n;i++){
		f=-1;
		for(ll j=0;j<i;j++)
			if(a[j]>a[i])
				f=j+1;
		x[i]=f;
	}
	y[n-1]=-1;
	for(ll i=0;i<n-1;i++){
		f=-1;
		for(ll j=i+1;j<n;j++){
			if(a[i]<a[j]){
				f=j+1;
				break;
			}
		}
		y[i]=f;
	}
	for(ll i =0;i<n;i++)
		cout<<x[i]+y[i]<<" ";
	cout<<endl;
	return 0;
}
