#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	double x,y;
	cin>>x>>y;
	double z,w;
	double a=log(x);
	double b=log(y);
	if(y<x){
		z=a/b;
		w=z*y;
		if(w>x) cout<<'>'<<endl;
		if(w<x) cout<<'<'<<endl;
		if(x==w) cout<<'='<<endl;
	}
	else if(x<y){
		z=b/a;
		w=z*x;
		if(y>w) cout<<'>'<<endl;
		if(y<w) cout<<'<'<<endl;
		if(y==w) cout<<'='<<endl;
	}
	else{
		cout<<"="<<endl;
	}
	return 0;
}
