#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++){
			if(a[i]<=a[i+1]){
				a[i+1]-=a[i];
				a[i]=0;
			}	
			else{
				a[i]-=a[i+1];
				a[i+1]=0;
			}	
	}
	int f=0;
	for(int i=0;i<n;i++)
		if(a[i]!=0){
			f=1;	cout<<"NO"<<endl; break;
		}
	if(f==0)
		cout<<"YES"<<endl;
	return 0;
}
