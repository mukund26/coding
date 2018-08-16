#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int g;
		cin>>g;
		
		string a;
		int mark[1000];
		memset(mark,0,sizeof(mark));
		while(g--)
		{
			cin>>a;
			for(int i=0;i<a.length();i++)
			{
				if(a[i]==1+'0')
					mark[i]++;
			}
		}
		int max=*std::max_element(mark,mark+1000);
		cout<<max<<endl;
		return 0;
	}