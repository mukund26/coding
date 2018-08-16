#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,k,x,i,ans=0;
        ll a[1500000];
        memset(a,0,sizeof(a));
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            a[x]++;
        }
        for(i=0;i<k;i++)
        {
            if(a[1<<i]==0)
            ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}