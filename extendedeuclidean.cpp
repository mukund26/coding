#include <bits/stdc++.h>
using namespace std;
int x,y;

void extended(int a,int b){
	if (b==0){
		x=1;
		y=0;
	}
	else{
		extended(b,a%b);
		int t=x;
		x=y;
		y=t-(a/b)*y;
	}
}

int main()	{
	int a,b;
	cin>>a>>b;
	extended(a,b);
	cout<<x<<" "<<y<<endl;
	}