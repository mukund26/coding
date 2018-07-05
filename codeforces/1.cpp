#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector < ii > vii;
typedef vector <int> vi;
#define INF 1000000000

ll readInt (){
    bool minus = false;
    ll result = 0;
    char ch;
    ch = getchar();
    while (true){
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (true){
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}


int main(){
	int n=readInt(),m=readInt();
	int a[10],c[10],mi,x[10];
	memset(c,0,sizeof(c));
	memset(x,0,sizeof(x));
	for(int i=0;i<n;i++){
	    a[i]=readInt();
		c[a[i]]++;
	}
	for(int i=0;i<m;i++){
		mi=readInt();
		if(c[mi]!=0){
			x[mi]=1;		
		}
	}	
	for(int i=0;i<n;i++){
		if(x[a[i]]==1)
			cout<<a[i]<<" ";
	}
	return 0;
}
