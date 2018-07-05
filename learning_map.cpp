#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	map <int,int> m;
	m.insert(ii(1,40) );
	m.insert(ii(2,34));
	m.insert(ii(4,45));
	m.insert(ii(3,56));
	map <int,int> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	it=m.upper_bound(2);
	cout<<it->first<<endl;
	m.erase(m.begin(),m.find(3));
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	m.erase(3);
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	return 0;
}
