#include<iostream>
using namespace std;
int main()
{
	int n,a[2000],m;
	cin>>n;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	int z=0;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]>a[j])z^=1;
	cin>>m;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		if((b-a)*(b-a+1)/2%2)z^=1;
		cout<<(z?"odd":"even")<<endl;
	}
	return 0;
}