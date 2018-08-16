#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int counta=0,countb=0,initiala=-1,initialb=-1;
		for(int i=0;i<str.length();i++){
			if(str[i]=='A'){
				counta++;
				initialb=-1;
				if(initiala==-1) initiala=i;
				else{
					counta+=i-initiala-1;
					initiala=i;
				}
			}
			if(str[i]=='B'){
				countb++;
				initiala=-1;
				if(initialb==-1) initialb=i;
				else{
					countb+=i-initialb-1;
					initialb=i;
				}
			}
			//cout<<counta<<" "<<countb<<endl; 
		}
		cout<<counta<<" "<<countb<<endl; 
	}
	return 0;
}