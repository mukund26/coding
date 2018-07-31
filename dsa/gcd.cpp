#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
	{
		return b==0 ? a : gcd(b,a%b);
	}

int main()
	{
		int a,b,r;
		cin>>a>>b;
		r=gcd(a,b);
		cout<<r<<endl;
	}