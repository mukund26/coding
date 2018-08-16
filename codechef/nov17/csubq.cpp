#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli value(lli x){
	lli ans=((x*(x+1))/2);
	return ans;
}

int main(){
	lli n,q,l,r,i;
	cin>>n>>q>>l>>r;
	lli size=n/1000;
	lli a[n+1];
	vector< lli > v(size);
	if(l>0){
		for(lli i=1;i<=n;i++)
			v[i]=0;
	}	
	else{
		for(lli i=1;i<=n;i++)
			v[i]=1;
	}	
	for(i=0;i<q;i++){
		lli t,a,b;
		cin>>t>>a>>b;
		if(t==1){
			if(b>=l&&b<=r)
				v[a]=1;
			if(b<l)
				v[a]=0;
			if(b>r)
				v[a]=2;
		}
		if(t==2){
			lli ans=0,count=0,block=0;
			for(lli j=a;j<=b;j++){
				if(v[j]==0){
					count++;
					block++;
				}		
				if(v[j]==1){
					ans-=value(count);
					count=0;
					block++;
				}
				if(v[j]==2){
					ans-=value(count);
					ans+=value(block);
					count=0;
					block=0;
				}
			}	
			ans-=value(count);
			ans+=value(block);	
			cout<<ans<<endl;
		}
	}
	return 0;
}