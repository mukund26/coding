#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll method1(string num){
	ll mid = (0+num.length())/2;
	//cout<<mid<<endl;
	string half = num.substr(0, mid);
	//cout<<half<<endl;
	string g = num.substr(0,mid+1);
	reverse(half.begin(), half.end());
	g.append(half);
	stringstream geek(g);
	int x=0;
	geek>>x;
	return x;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		string num;
		cin>>num;
		//stringstream geek(num);
		//int x=0;
		//cout<<method1(num)<<endl;
		cout<<min(method1(num),method2(num))<<endl;
	}
return 0;
}
	