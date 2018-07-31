#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	lli n,m,i;
	cin>>n>>m;
	vector < pair < int, int > > v;
	for(i=0;i<m;i++){
		lli a,b,k;
		cin>>a>>b>>k;
		v.push_back(make_pair(a,k));
		v.push_back(make_pair(b+1,-1*k));
	}
	lli ma=0,sum=0;
	sort(v.begin(),v.end());
	for(i=0;i<2*m;i++){
		sum+=v[i].second;
		ma=max(ma,sum);
	}
	cout<<ma<<endl;
    return 0;
}