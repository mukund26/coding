#include<bits/stdc++.h>
using namespace std;

int main()
        {
                long long int *a,v=0,i=0;
                a=new long long int;
                while(1)
                {
                cin>>a[i];
                v++;
                if(a[i]==42)
                {
                       break;
                }
                i++;
                }
                for(i=0;i<v-1;i++)
                        cout<<a[i]<<endl;
                return 0;
        }