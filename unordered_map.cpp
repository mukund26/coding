#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	string s="I am one of the top 10 competitve coders globally.";
	stringstream ss(s);
	string w;
	unordered_map<string, int> x;
	while(ss>>w)
		x[w]++;
	unordered_map <string, int> :: iterator it;
	for(it=x.begin();it!=x.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
