#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c[101],x;
		memset(c,0,sizeof(c));
		for(int i=0;i<n;i++){
			cin>>x;
			c[x-1]++;
		}
		for(int i=0;i<101;i++){
			if(c[i]==1){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}