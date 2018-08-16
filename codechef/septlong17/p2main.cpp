#include <bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
       if(n%2==0)
            {
               for(int i=1;i<=n;i++)
               {
                    if(i%2==0)
                        cout<<i-1<<" ";
                    else
                        cout<<i+1<<" ";
               } 
               cout<<endl;
            }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(i%2==0)
                        cout<<i-1<<" ";
                    else
                        cout<<i+1<<" ";
            }
            cout<<n<<" "<<n-2<<endl;
        }
    }
    return 0;
}