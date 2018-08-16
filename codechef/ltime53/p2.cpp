#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++)
            sum+=s[i]-'0';
        bool posss = false;
        for(int i=0;i<s.size();i++)
        {
            int tmp = sum-(s[i]-'0');
           // cout<<tmp<<endl;
            if(i<s.size()-1)
            {
            if(tmp %3 ==0 && s[s.size()-1] %2 ==0)
            {
                posss=true;
                break;
            }
            }
            else
            {
                if(tmp %3 ==0 && s[s.size()-2] %2 ==0)
                {
                    posss=true;
                    break;
                }
            }

        }
        if(posss)
        {
            bool find = false;
            int index=0;
            for(int i=0;i<s.size();i++)
            {
                int tmp = sum-(s[i]-'0');
                if(tmp %3 ==0 && s[s.size()-1] %2 ==0 && s[i+1]-'0'>s[i]-'0')
                {
                       index = i;
                       find=true;
                       break;
                }

            }
            if(!find)
            {
                for(int i=s.size()-1;i>=0;i--)
                {
                    int tmp = sum-(s[i]-'0');
                    if(i < s.size()-1)
                    {
                    if(tmp %3 ==0 && s[s.size()-1] %2 ==0 )
                    {
                           index = i;

                           break;
                    }
                    }
                    else
                    {
                        if(tmp %3 ==0 && s[s.size()-2] %2 ==0 )
                        {
                               index = i;

                               break;
                        }
                    }
                }
            }
            for(int i=0;i<index;i++)
                cout<<s[i];
            for(int i=index+1;i<=s.size()-1;i++)
                cout<<s[i];
        }
        else
        {
            cout<<"-1";
        }

        cout<<endl;
    }
    return 0;
}
