#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool palin(int,int);

int scan(){
    	register int c = getchar_unlocked();
        register int n = 0;
        register int neg=0;
        for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
        if(c=='-') {
        	neg=1; c=getchar_unlocked();
        }
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            n = (n<<1) + (n<<3) +c -48;
        }
        if(neg) return -n;
        else return n;
}

int main()
{
	int t=scan();
	while(t--)
	{
		int num,n;
		num=scan();
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