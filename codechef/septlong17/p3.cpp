#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string str;
			cin>>str;
			ll size=str.length();
			int a[10];
			memset(a,0,sizeof(a));
			for(ll i=0;i<size;i++)
			{
				a[str[i]-'0']++;
			}
			if(a[6]&&a[5])
				cout<<'A';
			if(a[6]>1)
				cout<<'B';
			if(a[6]&&a[7])
				cout<<'C';
			if(a[6]&&a[8])
				cout<<'D';
			if(a[6]&&a[9])
				cout<<'E';
			if(a[7]&&a[0])
				cout<<'F';
			if(a[7]&&a[1])
				cout<<'G';
			if(a[7]&&a[2])
				cout<<'H';
			if(a[7]&&a[3])
				cout<<'I';
			if(a[7]&&a[4])
				cout<<'J';
			if(a[7]&&a[5])
				cout<<'K';
			if(a[7]&&a[6])
				cout<<'L';
			if(a[7]>1)
				cout<<'M';
			if(a[7]&&a[8])
				cout<<'N';
			if(a[7]&&a[9])
				cout<<'O';
			if(a[8]&&a[0])
				cout<<'P';
			if(a[8]&&a[1])
				cout<<'Q';
			if(a[8]&&a[2])
				cout<<'R';
			if(a[8]&&a[3])
				cout<<'S';
			if(a[8]&&a[4])
				cout<<'T';
			if(a[8]&&a[5])
				cout<<'U';
			if(a[8]&&a[6])
				cout<<'V';
			if(a[8]&&a[7])
				cout<<'W';
			if(a[8]>1)
				cout<<'X';
			if(a[8]&&a[9])
				cout<<'Y';
			if(a[9]&&a[0])
				cout<<'Z';
			cout<<endl;
		}
		return 0;
	}