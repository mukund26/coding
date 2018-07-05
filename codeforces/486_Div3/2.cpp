#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
multimap<int,string> s;
multimap<int,string> :: iterator it;
int main(){
	int n;
	cin>>n;
	string st;
	for(int i=0;i<n;i++){
		cin>>st;
		s.insert(make_pair(st.length(),st));
	}
	int x=0;
	multimap<int,string> :: iterator itx=s.begin();
	it=s.begin();
	it++;
	for( ;it!=s.end();it++){
		if(it->second.find(itx->second) != std::string::npos)
			x++;
		itx++;
	}
	if(x==n-1){
		cout<<"YES"<<endl;
		for(it=s.begin();it!=s.end();it++){
			cout<<it->second<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
