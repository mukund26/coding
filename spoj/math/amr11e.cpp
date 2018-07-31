#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,number=50,p=0,count,i;
		cin>>n;
		if(n==1){
			cout<<30<<endl;
		}
		else
		if(n==2){
			cout<<42<<endl;
		}
		else{
			count=2;
			while(count!=n){
				number++;
				i=number;
				p=0;
				for(int j=2;j<=sqrt(i);j++){
					if(i%j==0){
						while(i%j==0){
							i/=j;
						}
						p++;
						//cout<<"p : "<<p<<" number : "<<i<<endl;
					}
				}
				if(i!=1) p++;
				if(p>=3){
						count++;
				}
			}
			cout<<number<<endl;
		}
	}
	return 0;
}