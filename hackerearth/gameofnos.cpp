#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>>n;
	ll a[n],b[n],c[n];
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	for(ll i=0;i<n;i++)
		cin>>a[i];
	stack <ll> s;
	ll x,j;
	s.push(0);
	for(ll i=1;i<n;i++){
		if(s.empty()==false){
			x=s.top();
			j=a[x];
			s.pop();
			while(a[i]>j){
				b[x]=i;
				if(s.empty())
					break;
				x=s.top();
				j=a[x];
				s.pop();		
			}
			if(a[i]<=j)
				s.push(x);
		}	
		s.push(i);
	}
	while(s.empty()==false){
		x=s.top();
		b[x]=-1;
		s.pop();
	}
	/**for(ll i=0;i<n;i++)
		cout<<b[i]<<" ";
       	cout<<endl;**/	
	s.push(0);
	for(ll i=1;i<n;i++){
		if(s.empty()==false){
			x=s.top();
			j=a[x];
			s.pop();
			while(a[i]<j){
				c[x]=i;
				if(s.empty())
					break;
				x=s.top();
				j=a[x];
				s.pop();		
			}
			if(a[i]>=j)
				s.push(x);
		}	
		s.push(i);
	}
	while(s.empty()==false){
		x=s.top();
		c[x]=-1;
		s.pop();
	}
	for(ll i=0;i<n;i++){
		if(b[i]!=-1)
		cout<<a[c[b[i]]]<<" ";
		else
			cout<<-1<<" ";
	}
	cout<<endl;
	return 0;
}
