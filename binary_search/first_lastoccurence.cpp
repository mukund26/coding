#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int scan(){
    	register int c = getchar_unlocked();
        register int n = 0;
        register int neg=0;
        for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
        if(c=='-') {
        	neg=1; c=getchar_unlocked();
        }
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        if(neg) return -n;
        else return n;
}

int good;

void binary_search(int a[],int low,int high,int val){
    int mid=low+ (high-low)/2;
    if(low>high) return;
    if(a[mid]==val){
        good=mid;
        binary_search(a,low,mid-1,val);
    }
    else if(a[mid]>val) binary_search(a,low,mid-1,val);
    else if(a[mid]<val) binary_search(a,mid+1,high,val);
}

int main(){
	int n=scan();
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=scan();
    good=-1;
    binary_search(a,0,n,val);
    if(good!=-1) cout<<good<<endl;
    else cout<<"sapm"<<endl;
	return 0;
}
