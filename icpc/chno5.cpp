#include <bits/stdc++.h>
using namespace std;

/*struct Node{
	int data;
	Node *left;
	Node *right;
};*/

int main()
{
	int t;
	cin>>t;
	while(t--){
		long int n,m;
		cin>>n>>m;
		long long int ti=0;
		ti=(n-1)*m-(m-1)*(ceil(float(n-1)/2)-1);			
		cout<<ti<<endl;
	}
	return 0;
}