#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int64_t s[3001],c[3001],cc[3001],m;

int main(){
	ll n; cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>c[i];
	for(int i=1,m=2e9;i<n;i++){	
		for(int j=0;j<i;j++)
			if(s[j]<s[i]) m=min(m,c[i]+c[j]);
		cc[i]=m;
	}		
	for(int i=2,m=2e9;i<n;i++){
		for(int j=1;j<i;j++)
			if(s[j]<s[i]) m=min(m,cc[j]+c[i]);
	}	
	cout<<(m<2e9?m:-1)<<endl;
	return 0;
}
