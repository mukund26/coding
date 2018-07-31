#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool palin(int,int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num,n;
		cin>>num;
		n=num;
		while(palin(num,n)==false){
		n=num;	
		num++;
		}
		cout<<num<<endl;
	}

return 0;
}

bool palin(int num,int n)
{
int d, check, rev=0;
check=num;
do{
d=num%10;
rev= (rev*10)+d;
num=num/10;
}while(num!=0);
if(check==rev&&rev>n)
return true;
else
return false;

}