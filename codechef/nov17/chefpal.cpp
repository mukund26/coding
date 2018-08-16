#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	lli t;
	cin>>t;
	while(t--){
		lli n,a;
		cin>>n>>a;
		if(a==1){
			cout<<n<<" ";
			string ans=string(n,'a');
			cout<<ans<<endl;
		}
		else if(a==2){
			if(n==1){
				cout<<"1 a"<<endl;
			}
			else if(n==2){
				cout<<"1 ab"<<endl;
			}
			else if(n==3){
				cout<<"2 aab"<<endl;
			}
			else if(n==4){
				cout<<"2 aabb"<<endl;
			}
			else if(n==5){
				cout<<"3 aaabb"<<endl;
			}
			else if(n==6){
				cout<<"3 aaabbb"<<endl;
			}
			else if(n==7){
				cout<<"3 aaababb"<<endl;
			}
			else if(n==8){
				cout<<"3 aaababbb"<<endl;
			}
			else{
				cout<<"4 ";
				string ans="aaaa";
				for (lli i=0;i<n-4;i++){
					if(i%6==0 || i%6==2 || i%6==3)
						ans+='b';
					if(i%6==1 || i%6==4 || i%6==5)
						ans+='a';
				}
				cout<<ans<<endl;
			}
		}
		else{
			int r=n%a,d=n/a;
			string ans,remain;
			cout<<"1 ";
			if(n>=a){
				for(lli i=0;i<a;i++)
					ans+='a'+i;
			}
			else{
				for(lli i=0;i<n;i++)
					ans+='a'+i;
			}	
			if(d>0){
				for(lli i=0;i<r;i++)
					remain+='a'+i;
				for(lli i=0;i<d;i++)
					cout<<ans;
				cout<<remain;
			}
			else{
				cout<<ans;
			}			
			cout<<endl;
		}
	}
	return 0;
}