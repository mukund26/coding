#include<iostream>
#include<vector>
using namespace std;
#define lli long long int
vector <pair<lli,lli> > vect;
lli tree[2000440];
int *a,p;
void build(lli node,lli start,lli end){
	if(start==end)
		tree[node]=a[start]%p;
	else{
		lli mid=(start+end)/2;
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		tree[node]=(tree[2*node+1]*tree[2*node+2])%p;
	}
}
lli query(lli node,lli start,lli end,lli l,lli r){
	if(r<start || l>end)
		return 1;
	else
		if(l<=start && r>=end)
			return tree[node];
		else{
			lli mid=(start+end)/2;
			return (query(2*node+1,start,mid,l,r)*query(2*node+2,mid+1,end,l,r))%p;
		}
}
int main(){
        lli t,n,q,*arrb,x;
        cin>>t;
        for(lli ti=0;ti<t;ti++){
                cin>>n>>p>>q;
                a=new int[n+1];
                for(lli i=0;i<n;i++)
                        cin>>a[i];
                arrb=new lli[q/64+2+1];
                for(lli i=0;i<q/64+2;i++)
                        cin>>arrb[i];
				build(0,0,n-1);
                x=0;
                for(lli iq=0;iq<q;iq++){
                       lli l,r;
                        if(iq%64==0) {
                                l=arrb[iq/64]+x,r=arrb[iq/64+1]+x;
                                l%=(n),r%=(n);
                                vect.push_back(make_pair(l,r));
                        }
                        else{
                                l=vect[iq-1].first+x,r=vect[iq-1].second+x;
                                l%=(n),r%=(n);
                                vect.push_back(make_pair(l,r));
                        }
                        //cout<<"query no is "<<iq<<endl;
                        if(l>r) swap(l,r);
                       // cout<<l<<" "<<r<<endl;
						lli ans=query(0,0,n-1,l,r);
                        //cout<<ans<<" ans "<<endl;
                        x=(ans+1)%p;
                       //cout<<x<<" x "<<endl;
                }
                        cout<<x<<endl;
                        vect.clear();
        }
        return 0;
}