#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int scan(){
	register int c=getchar_unlocked();
	register int n=0, neg=0;
	for( ;(c<48||c>57)&&c!='-';c=getchar_unlocked() );
	if(c=='-'){
		neg=1; 
		c=getchar_unlocked();
	}
	for( ; c>=48&&c<=57; c=getchar_unlocked()){
		n=(n<<1)+(n<<3)+c-48;
	}
	if(neg) return -n;
	else return n;
}

int main(){
	int n=scan();
	string s1,s2;
	while(n--){
		cin>>s1;
		cin>>s2;
		int co=0,cb=0,cbo=0;
		for(int i=0;i<3;i++){
			if((s1[i]=='o'&&s2[i]=='b')||(s1[i]=='b'&&s2[i]=='o')) cbo++;
			if((s1[i]=='b'&&s2[i]!='o')||(s1[i]!='o'&&s2[i]=='b')) cb++;
			if((s1[i]=='o'&&s2[i]!='b')||(s1[i]!='b'&&s2[i]=='o')) co++;
		}
		//cout<<cbo<<" "<<cb<<" "<<co<<endl;
		if(cbo==3){
			cout<<"yes"<<endl;
		}
		else{
			if((cbo==2&&co==1)||(cb==2&&co==1)||(cbo==2&&cb==1)||(cbo==1&&cb==1&&co==1)||(cbo==1&&cb==2)) 
				cout<<"yes"<<endl;
			else{
				cout<<"no"<<endl;
			}
		}
	}	
	return 0;
}
