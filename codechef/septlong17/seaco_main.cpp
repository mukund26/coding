#include <bits/stdc++.h>
using namespace std;

class me{
    public:
    int beta,baap;
    vector <int> f;
    void clear(){
        beta = 0;
        baap = 0;
        f.clear();
    }
} me[1000002];
 
void trial(int a,int b,int v)
    {
        int i=0;
        while(i<me[b].family.size())
        {
            me[a].family.push_back(me[b].family[i]);
            me[me[b].family[i]].baap=a;
            me[me[b].family[i]].beta = me[me[b].family[i]].beta ^ v;
            i++;
        }    
    me[b].family.clear();
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag=1,x,y,v,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++)
            me[i].clear();
        while(q--)
        {
            cin>>x>>y>>v;

            if(x==y && v==1)
                flag=-1;

			if(flag==-1 || x==y)
                continue;

            if(me[x].baap==0 && me[y].baap==0){
                me[x].baap=x;
                me[y].baap=x;
                me[x].f.push_back(y);
                me[x].f.push_back(x);
                me[x].beta=0;
                me[y].beta=v;
            }
            
            else if(me[x].baap==0){
                me[x].baap=me[y].baap;
                me[x].beta=me[y].beta ^ v;
                me[me[y].baap].f.push_back(x);
            }

            else
                if(me[y].baap==0){
                me[y].baap=me[x].baap;
                me[y].beta=me[x].beta ^ v;
                me[me[x].baap].f.push_back(y); 
            }

            else{
                if(me[x].baap==me[y].baap)
                {
                    if(me[x].beta ^ me[y].beta != v)flag=-1; 
                }
                else
                    trial(me[x].baap,me[y].baap,(me[y].beta ^ v) ^ me[x].beta);  
                }
        }
        if(flag==-1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}