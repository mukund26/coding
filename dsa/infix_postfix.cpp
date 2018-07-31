#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct stack
{
	char data;
	int top;
};

int main()
	{
		strings str;
		cin>>str;
		int i,j,l;
		l=str.size();
		stack st[l];
		char a[l];
		st.top=-1;
		j=0;
		for(i=0;i<l;i++)
		{
			if(str[i]=='(')
				st[++top].data='(';
			if(isnum(str[i]))
				ch[j++]=str[i];
			
		}
		return 0;
	}