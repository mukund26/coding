#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1000000000

int main(){
	int n;
	cin>>n;
	ll a[n],b[n];
	memset(b,0,sizeof(b));
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n-1;i++){
		for(ll j=i+1;j<n;j++){
			if(a[i]<a[j]){
				b[i]=j;
				break;
			}
		}
	}
	bool flag=true;
	for(ll i=0;i<n-1;i++){
		flag=true;
		for(ll j=b[i]+1;j<n;j++){
			if(a[b[i]]>a[j]&&b[i]!=0){
				cout<<a[j]<<" ";
				flag=false;
				break;
			}
		}
		if(flag==true)
			cout<<-1<<" ";
	}
	cout<<-1<<endl;
	return 0;
}
