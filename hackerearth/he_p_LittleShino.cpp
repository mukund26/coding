#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set < ii > s;
	int b,b2;
	vi v;
	for(int i=0;i<n-1;i++){
		v.push_back(a[i]);
		for(int j=i+1;j<n;j++){
			v.push_back(a[j]);
			sort(v.begin(),v.end());
			int x=v.size();
			s.insert(make_pair(v[x-1],v[x-2]));	
		}
		v.clear();
	}
	set < ii > :: iterator it;
	/**for(it=s.begin();it!=s.end();it++)
		cout<<it->first<<" "<<it->second<<endl;**/
	cout<<s.size()<<endl;
	return 0;
}
