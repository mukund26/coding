#include<bits/stdc++.h>
using namespace std;
#define INF -1000000000

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int s=0,m=0;
	for(int i=0;i<n;i++){
		s+=ar[i];
		if(s<0)
			s=0;
		else if(m<s)
			m=s;
	}
	cout<<m<<endl;
	return 0;
}