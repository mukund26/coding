#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
 if(b==0)
 return a;
 return gcd(b,a%b);
}
 
int main()
{ ios_base::sync_with_stdio(false); cin.tie (NULL);
	int tc; cin>>tc;
	int a,n,m,c,b,d; 
	while (tc--)
	{
		cin>>a>>b>>c>>d;
		a*=c;d*=b; b*=c; 
		m=gcd(d,b); n=gcd(m,a);
		a/=n; 
		b/=n;
		d/=n;
		cout<<a<<" "<<b<<" "<<d<<endl;
}return 0;
}		 

