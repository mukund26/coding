#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int scan(){
	register int c=getchar_unlocked();
	register int n=0, neg=0;
	for( ;(c<48||c>57)&&c!='-';c=getchar_unlocked() );
	if(c=='-'){
		neg=1; 
		c=getchar_unlocked();
	}
	for( ; c>=48&&c<=57; c=getchar_unlocked()){
		n=(n<<1)+(n<<3)+c-48;
	}
	if(neg) return -n;
	else return n;
}

int main(){
	int t=scan();
	vi v;
	for(int i=0;i<=30;i++){
		for(int j=i+1;j<=30;j++)
			v.push_back(pow(2,i)+pow(2,j));	
	}
	sort(v.begin(),v.end());
	while(t--){
		int n;
		cin>>n;
		if(n<=3) cout<<3-n<<endl;
		else{
		auto it = lower_bound(v.begin(),v.end(),n);
		int ans = it-v.begin();
		cout<<min(abs(v[ans]-n),abs(n-v[ans-1]))<<endl;
		}
	}	
	return 0;	
}
