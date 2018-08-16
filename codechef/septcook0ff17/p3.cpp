#include <bits/stdc++.h>
using namespace std;

set <int> v;

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	v.clear();
        int n,k,a,i;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            v.insert(a);
        }
        int j=0,ans=0;
        for(;j<k;j++)
        {
            if(v.find(pow(2,j))==v.end())
            ans++;
        }
        printf("%d\n",ans);
    }
}