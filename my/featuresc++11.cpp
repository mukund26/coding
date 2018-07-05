#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int scan(){
    	register int c = getchar_unlocked();
        register int n = 0;
        register int neg=0;
        for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
        if(c=='-') {
        	neg=1; c=getchar_unlocked();
        }
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        if(neg) return -n;
        else return n;
}

int main(){
	int n=scan();
	int a[n];
	for(int i=0;i<n;i++) a[i]=scan();
	for(auto val:a)
		cout<<val<<" ";
	cout<<endl;
	auto func = [](){ cout<<"Hello World"<<endl; } ;
	func();
	auto func2 = [](char c) {c=='a'?cout<<1:cout<<0;};
	func2('a');
	auto func3 = [](int x,int y){ return x+y;};
      	cout<<func3(2,9)<<endl;	
	int *p=&n;
	cout<<*p<<" "<<&p<<endl; 
	cout<<setprecision(5)<<fixed<<56.767676464<<endl;
	map<int,int> m; 
	m.insert(ii(1,2));
	m.insert(ii(3,4));
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
