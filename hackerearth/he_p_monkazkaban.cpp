#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	ll n;
	cin>>n;
	ll a[n],b[n],c[n];
	memset(b,-1,sizeof(b));
	memset(c,-1,sizeof(c));
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll x,j;
	stack < ll > s;
	s.push(0);
	for(ll i=1;i<n;i++){
		if(s.empty()==false){
			x=s.top();
			j=a[x];
			s.pop();
			while(j<a[i]){
				b[x]=i+1;
				if(s.empty())
					break;	
				x=s.top();
				j=a[x];
				s.pop();
			}
			if(j>=a[i])
			s.push(x);
		}
		s.push(i);
	}
	while(s.empty()==false){
		x=s.top();
		b[x]=-1;
		s.pop();
	}
	s.push(n-1);
	for(ll i=n-2;i>=0;i--){
		if(s.empty()==false){
			x=s.top();
			j=a[x];
			s.pop();
			while(j<a[i]){
				c[x]=i+1;
				if(s.empty())
					break;	
				x=s.top();
				j=a[x];
				s.pop();
			}
			if(j>=a[i])
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
		cout<<b[i]+c[i]<<" ";
	}
	return 0;
}
