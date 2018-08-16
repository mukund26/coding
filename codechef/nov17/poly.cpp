#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main(){
	int T;
	cin>>T;
	while(T--){
		lli n;
		cin>>n;
		lli a[n],b[n],c[n],d[n];
		for(lli i=0;i<n;i++){
			cin>>a[i]>>b[i]>>c[i]>>d[i];
		}
		lli q;
		cin>>q;
		while(q--){
			lli t;
			cin>>t;
			lli min=1844674407370955161,val;
			for(lli i=0;i<n;i++){
				val=a[i]+(b[i]*t)+(c[i]*t*t)+(d[i]*t*t*t);
				if(val<min)
					min=val;
			}
			cout<<min<<endl;
		}
	}	
	return 0;
}