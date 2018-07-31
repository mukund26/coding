#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	long double i=22.0/7;
	int n,t;
	cin>>t;
	while(t--){
	cin>>n;
	cout<<setprecision(n)<<fixed<<i;
	}
}	
