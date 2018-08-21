#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s;
	cin>>t;
	if(s==t){ cout<<"YES"<<endl; return 0; }
	int i=0;
	while(s[i]==t[i] and i<min(n,m)) i++;
	while(s[n-1]==t[m-1] and i<min(n,m)) { n--; m--;}
	(s[i]=='*' and (n-i)==1 )?cout<<"YES":cout<<"NO";
	cout<<endl; 
	return 0;
}
