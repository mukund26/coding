#include <bits/stdc++.h>
using namespace std;
typedef long long ll;	

int main(){
	ll n,k,count=0,ans;
	cin>>n>>k;
	if(k==1)
		cout<<n<<endl;
	else{
		while(n!=1){
			n/=2;
			count++;
		}
		count++;
		ans=pow(2,count/2);
		if(count%2==0)
			ans*=ans;
		else{
			ans*=ans;
			ans*=2;
		}
		cout<<ans-1<<endl;
	}
	return 0;
}