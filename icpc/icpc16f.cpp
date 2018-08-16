#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,d,D,f=0;
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		cin>>n>>m>>d>>D;
		if ( m>n*D || m<n*d ){
			cout<<-1<<endl;
		}
		else{
			int c=0;
			while(m>=n){
				for (int i=0;i<n;i++){
					cout<<i+1<<" "<<((i+c)%n)+1<<endl;
				}
				m-=n;
				c++;
			}
			for(int i=0;i<m;i++){
				cout<<i+1<<" "<<((i+c)%n)+1<<endl;
			}

		}
	}
	return 0;
}