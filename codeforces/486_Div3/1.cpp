#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n],b[101];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=i+1;
	}
	int c=0;
	for(int i=0;i<101;i++){
		if(b[i]!=0) c++;
	}
	if(c>=k){
		cout<<"YES"<<endl;
		int i=0;
		while(k){
			if(b[i]!=0){
				cout<<b[i]<<" ";
				k--;
			}
			i++;
		}
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
