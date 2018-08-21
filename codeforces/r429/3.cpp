#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define mod 1000000007
#define mp make_pair


int main(){
	int n; cin>>n;
	int a[n],b[n],c[n];
	multimap<int,int> m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){ cin>>b[i];
		//m.insert(mp(b[i],i);
		c[i]=b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
//	int c[n];
	for(int i=n-1;i>=0;i--){
		m.insert(mp(b[n-i-1],a[i]));
	}
/*	for(auto it=m.begin();it!=m.end();it++)
		cout<<it->first<<"-"<<it->second<<endl; */
	for(int i=0;i<n;i++){
		auto it=m.find(c[i]);
		cout<<it->second<<" ";
		m.erase(it);
	}
	cout<<endl;
	return 0;
}
