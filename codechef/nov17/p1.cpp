#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int counta=0,countb=0,countdota=0,countdotb=0,flag=-1,cona=0,conb=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='A'){
				counta++;
				i=i+1;
				countdota=0;
				while(str[i]=='.'&&i<str.length()){
					countdota++;
					i++;
				}
				if(str[i]=='A'&&i<str.length()){
					counta+=countdota;
					i=i-1;
				}
			}
			if(str[i]=='B'){
				countb++;
				i=i+1;
				countdotb=0;
				while(str[i]=='.'&&i<str.length()){
					countdotb++;
					i++;
				}
				if(str[i]=='B'&&i<str.length()){
					countb+=countdotb;
					i=i-1;
				}
			}
		}
		cout<<counta<<" "<<countb<<endl; 
	}
	return 0;
}