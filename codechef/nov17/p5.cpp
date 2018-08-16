#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int blk_sz=6;

lli block[500005/6];
lli v[500005];

lli value(lli x){
	lli ans=((x*(x+1))/2);
	return ans;
}

lli finalans(lli a,lli b){
	lli ans=0,count=0,blk=0;
	for(lli j=a;j<=b;j++){
		if(v[j]==0){
			count++;
			blk++;
		}		
		if(v[j]==1){
			ans-=value(count);
			count=0;
			blk++;
		}
		if(v[j]==2){
			ans-=value(count);
			ans+=value(blk);
			count=0;
			blk=0;
		}
	}	
	ans-=value(count);
	ans+=value(blk);
	return ans;
}

lli find(lli x,lli y){
	if(x<=y){
	for(lli i=x;i<=y;i++){
		if(v[i]==2){
			return i;
		}
	}
	}
	else{
		for(lli i=x;i>=y;i--){
		if(v[i]==2){
			return i;
		}
		}
	}
	return 0;
}

lli query(lli l, lli r)
{
	lli left=0,prev;
	lli right=0;
	lli number=(l-1)/blk_sz;
	lli b1=number*blk_sz+blk_sz;
	lli sum=0,ans=0,sub=0,merge,last=0;
	if(b1>=r){
		ans=finalans(l,r);
		return ans;
	}
	else{
		ans=finalans(l,b1);
		right=find(b1,l);
		if(right){
				sub=finalans(right+1,b1);
				prev=right;
				ans-=sub;
			}
		else{ 
			sub=ans;
			prev=l;
			ans-=sub;
		}
		// cout<<ans<<endl;
		l=b1+1;
		while(l+blk_sz<=r){
			sum=block[(l-1)/blk_sz];
			left=find(l,l+blk_sz-1);
			right=find(l+blk_sz-1,l);
			if(left){
				ans+=sum;
				ans=ans-finalans(l,left)-finalans(right+1,l+blk_sz-1);
				if(left!=l)
				ans+=finalans(prev,left);
				else{
					ans+=sub;	
				}
				sub=finalans(right+1,l+blk_sz-1);
				prev=right;
				last=0;
				//cout<<"1: "<<ans<<endl;
			}
			else{
				ans-=last;
				merge=finalans(prev,l+blk_sz-1);
				last=merge;
				ans+=merge;
				//cout<<"2: "<<ans<<endl;
			}
			l+=blk_sz;
		}
		left=find(l,r);
		if(left) {
			ans+=finalans(l,r)-finalans(l,left)+finalans(prev,left);
		}
		else { merge=finalans(prev,r);
			ans-=last;
			ans+=merge; }
		return ans;
	}
}

void preprocess(lli n)
{   lli blk_idx = -1;
    for (lli i=1; i<=n; i+=blk_sz) {
        if ((i-1)%blk_sz == 0) {
            blk_idx++;
            block[blk_idx]=finalans(i,i+blk_sz-1);
        }  
    }
}

int main(){
	lli n,q,l,r,i;
	cin>>n>>q>>l>>r;
	if(l>0){
		for(lli i=1;i<=n;i++)
			v[i]=0;
	}	
	else{
		for(lli i=1;i<=n;i++)
			v[i]=1;
	}	
	preprocess(n);
	for(i=0;i<q;i++){
		lli t,a,b;
		cin>>t>>a>>b;
		if(t==1){
			lli blockNumber = (a-1) / blk_sz;
			lli start=blockNumber*blk_sz+1;
			if(b>=l&&b<=r)
				v[a]=1;
			if(b<l)
				v[a]=0;
			if(b>r)
				v[a]=2;
			block[blockNumber] = finalans(start,start+blk_sz-1);
		}
		if(t==2){
			lli ans=query(a,b);	
			cout<<ans<<endl;
			ans=0;
			lli count=0,blk=0;
	for(lli j=a;j<=b;j++){
		if(v[j]==0){
			count++;
			blk++;
		}		
		if(v[j]==1){
			ans-=value(count);
			count=0;
			blk++;
		}
		if(v[j]==2){
			ans-=value(count);
			ans+=value(blk);
			count=0;
			blk=0;
		}
	}	
	ans-=value(count);
	ans+=value(blk);
		cout<<ans<<endl;	
		}
	}
	return 0;
}