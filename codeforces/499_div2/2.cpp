#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int main(){
 	int n,m;
	cin>>n>>m;
	int a[m];
	map<int,int> mi;
	for(int i=0;i<m;i++){
		cin>>a[i];	
		auto it = mi.find(a[i]);
		if(it!=mi.end()){
			it->second++;
		}
		else
			mi.insert(make_pair(a[i],1));
	}
	if(n>m){ 
		cout<<0<<endl;
	}   
	else{
		if(mi.size()==m)
			cout<<1<<endl;
		else if(mi.size()==1){
			auto it = mi.begin();
			cout<<it->second/n<<endl;
		}
		else{
			int temp=0;
			for(int i=100;i>=1;i--){
				temp=0;	
				for(auto it=mi.begin();it!=mi.end();it++){	
					temp+=it->second/i;
				}	
				if(temp>=n){
					cout<<i<<endl;
					return 0;
				}
			}
			cout<<0<<endl;
		}
	}
	return 0;
}
