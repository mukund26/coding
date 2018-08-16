#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long int n,p;
		cin>>n>>p;

		if(p==1 || p==2 || n==1 || n==2){
			cout<<"impossible"<<endl;
			continue;
		}

		string ans='a'+string(p-2,'b')+'a';
		for (long int i=0;i<n/p;i++){
			cout<<ans;
		}
		cout<<endl;
	}
	return 0;
	
}