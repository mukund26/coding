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
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a[26];
	memset(a,0,sizeof(a));
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(a[i]>k){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
