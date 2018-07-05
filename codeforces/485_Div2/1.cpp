#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	string s;
	int a[7];
	memset(a,0,sizeof(a));
	while(n--){
		cin>>s;
		if(s=="purple")
			a[1]++;
		if(s=="green") a[2]++;
		if(s=="blue") a[3]++;
		if(s=="orange") a[4]++;
		if(s=="red") a[5]++;
		if(s=="yellow") a[6]++;
 	}
 	int count=0;
 	for(int i=1;i<=6;i++){
 		if(a[i]==0) count++;
 	}
 	cout<<count<<endl;
 	for(int i=1;i<=6;i++){
 		if(a[i]==0){
 			if(i==1) cout<<"Power"<<endl;
 			else
 			if(i==2) cout<<"Time"<<endl;
 			else if(i==3) cout<<"Space"<<endl;
 			else if(i==4) cout<<"Soul"<<endl;
 			else if(i==5) cout<<"Reality"<<endl;
 			else cout<<"Mind"<<endl;
 		}
 	}
	return 0;
}
