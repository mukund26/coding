//sum in log(n) time

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

const int N = 1e5;
int t[4*N];
int n;
int *a;

int scan(){
	register int c = getchar_unlocked();
	register int n = 0, neg = 0;
	for( ; ( c<48|c>57)&&c!='-' ; c=getchar_unlocked());
	if(c=='-') {
		neg=1;
		c=getchar_unlocked();	
	}
	for( ; c>=48&&c<=57; c=getchar_unlocked()){
		n = (n<<1) + (n<<3) + c - 48;
	}	
	if(neg) return -n;
	else return n;
}

void build(int node, int start, int end){
	if(start == end){
		t[node] = a[start];
	}
	else{
		int mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		t[node] = t[2*node] + t[2*node+1];	
	}
}

void update(int node,int start,int end,int idx,int val){
	if(start==end){
		t[node]-=a[idx];
		a[idx]=val;
		t[node]+=val;
	}
	else{
		int mid= (start+end)/2;
		if(start<=idx && idx<=mid)
			update(2*node,start,mid,idx,val);
		else
			update(2*node+1,mid+1,end,idx,val);
		t[node]=t[2*node]+t[2*node+1];
	}
}

int query(int node,int start, int end,int l,int r) {  // sum on interval [l, r)
	// if outside the range of array 
	if(r<start || end<l)
		return 0;
	if(l<=start && end<=r) //completely in range
		return t[node];
	int mid = (start+end)/2;
	int p1 = query(2*node,start,mid,l,r);
	int p2 = query(2*node+1, mid+1,end,l,r);
	return p1+p2;
}

int main(){
	n=scan();
	a = new int[n];
	for(int i=0;i<n;i++) a[i]=scan();
	build(1,0,n-1);
	update(1,0,n-1,3,5);
	cout<<query(1,0,n-1,0,n-1)<<endl;	
	return 0;
}
