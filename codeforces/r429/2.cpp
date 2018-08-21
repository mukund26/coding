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
	int n;
	cin>>n;
	int a[n];
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		if(s%2!=0){
			cout<<"First"<<endl; return 0;
		}
	}
	cout<<"Second"<<endl;
	return 0;
}
