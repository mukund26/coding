#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,pid,last,countb;
		cin>>n>>pid;
		stack <int> s;
		s.push(pid);
		char ch;
		countb=0;
		while(n--){
			cin>>ch;
			if(ch=='P'){
				countb=0;
				last=s.top();
				cin>>pid;
				s.push(pid);
			}
			if(ch=='B'){
				countb++;
				if(countb%2!=0){
					last=s.top();
					s.pop();
				}
				else{
					s.push(last);
				}

			}
		}
		cout<<"Player "<<s.top()<<endl;
	}
	return 0;
}
