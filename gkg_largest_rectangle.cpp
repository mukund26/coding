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
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        return n;
}

int maxarea(int a[],int n){
	int curr_area,max_area=0;
	stack <int> s;
	int i=0;
	while(i<n){
		if(s.empty() || a[s.top()]<=a[i]){
			s.push(i++);
		}
		else{
			int x=s.top();
			s.pop();
			curr_area=a[x]*(s.empty()?i:i-s.top()-1);
			if(curr_area>max_area)
				max_area=curr_area;
		}
	}
	while(!s.empty()){
		int x=s.top();
		s.pop();
		curr_area=a[x]*(s.empty()?i:i-s.top()-1);
		if(curr_area>max_area)	
			max_area=curr_area;
	
	}
	return max_area;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	cout<<maxarea(a,n)<<endl;
	return 0;
}
