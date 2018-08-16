#include <bits/stdc++.h>
using namespace std;

int main()
	{
		string s;
	    cin>>s;
	    int k;
   	    cin>>k;
   	    int str[26];
   	    memset(str,0,sizeof(str));
   	    for(int i=0;i<s.length();i++)
   	    {
   	    	str[s[i]-'a']++;
   	    }
   	    for(int i=0;i<s.length();i++)
   	    {
   	    	if(str[s[i]-'a']>=k)
   	    	{
   	    		cout<<s[i];
   	    	}
   	    }
    
		return 0;
	}