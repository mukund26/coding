#include <bits/stdc++.h>
using namespace std;
map <int,pair<int,int> > css[1000001];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int id,val,attr,priority;
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&id,&attr,&val,&priority);
        if(css[id].find(attr)!=css[id].end()){
            if(priority>=css[id][attr].second){
                css[id][attr]=pair<int,int>(val,priority);
            }
        }
        else
            css[id][attr]=pair<int,int>(val,priority);    
    }

    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&attr);
        printf("%d\n",css[id][attr].first);
    }

}