#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

/*
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
}*/

int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a[26];
//	char first;
	memset(a,0,sizeof(a));
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	int cost=0; 	   
	int first,prev;
	for(int i=0;i<26;i++){
		if(a[i]!=0){
			first=i; 
			cost=i+1;
			k--;
			break;
		}
	}
	prev=first;
	for(int i=first+1;i<26;i++){
		if(a[i]!=0 && k>0 && i>=prev+2){
			k--;
			cost=cost+i+1;
			prev=i;
//			cout<<i<<" "<<cost<<endl;
		}
	}
	if(k==0) cout<<cost<<endl;
	else cout<<-1<<endl;
	return 0;
}
