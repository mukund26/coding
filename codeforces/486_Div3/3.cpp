#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int readInt (){
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (true){
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

int main(){
    int k=readInt();
    int n[k];
    vector< vector<int> > v(k);
    int sum[k];
    map<int,ii> m;
    for(int i=0;i<k;i++){
        n[i]=readInt();
        int a;
        sum[i]=0;
        for(int j=0;j<n[i];j++){
            a=readInt();
            sum[i]+=a;
            v[i].push_back(a);
        }
    }
    int count=0,idx1,val1,idx2,val2;
    for(int i=0;i<k;i++){
        for(int j=0;j<n[i];j++){
            auto x = m.find(sum[i]-v[i][j]);
            if(x!=m.end()&&x->second.first!=i+1){
                //cout<<i<<" "<<j<<endl;
                count++;
                idx1=x->second.first;
                val1=x->second.second;
                idx2=i+1;
                val2=j+1;
                break;
            }
            else{
                m.insert(make_pair(sum[i]-v[i][j],ii(i+1,j+1)));
                //auto x=m.begin();
                //cout<<x->first<<" "<<x->second.first<<" "<<x->second.second<<endl;
            }
        }
    }
    /*for(int i=0;i<k;i++){
        for(auto x=m[i].begin();x!=m[i].end();++x){
            cout<<x->first<<" "<<x->second<<endl;
        }
        cout<<endl;
    }*/
    /*int count=0,idx1,val1,idx2,val2;
    for(int i=0;i<k-1;i++){
        int j=i+1;
        while(j<k){
            for(auto x=m[i].begin();x!=m[i].end();++x){
                //cout<<x->first<<endl;
               auto fit = m[j].find(x->first);
               if(fit!=m[j].end()){
                    count++;
                    idx1=x->second+1;
                    idx2=fit->second+1;
                    val1=i+1;
                    val2=j+1;
                    break;
               }
            }
            j++;
            if(count)
            break;
        }
        if(count)
            break;
    }*/
    if(count){
        cout<<"YES"<<endl;
        cout<<idx1<<" "<<val1<<endl;
        cout<<idx2<<" "<<val2<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
