    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
     
    int main(){
        ll t;
        cin>>t;
        while(t--){
            ll n,i=0;
            cin>>n;
            vector< vector <ll> > v(n);	
            while(i<n){
                ll m,a;
                cin>>m;
                while(m--){
                    cin>>a;
                    v[i].push_back(a);
                }	
                i++;
            }
     
            if(n==1){
                cout<<0<<endl;
    			continue;
            }
            if(n==2){
                
    			ll max=0,min=10000001;
    			for(ll k=0;k<v[0].size();k++){
    				if(max<=v[0][k])
    					max=v[0][k];

    				if(min>=v[0][k])
    					min=v[0][k];
    			}

    			ll max1=0,min1=10000001;
    			for(ll k=0;k<v[1].size();k++){
    				if(max1<=v[1][k])
    					max1=v[1][k];
    				if(min1>=v[1][k])
    					min1=v[1][k];
    			}

    			if(abs(max-min1)>=abs(max1-min))
    				cout<<abs(max-min1)<<endl;
    			else
    				cout<<abs(max1-min)<<endl;

    			continue;
            }//end n==2
     
            i=0;
            vector < vector <ll> > z(n-1);
            while(i<n-1){
                ll temp,loc;
                ll yum;
                
                if(i>0){
                    for(ll k=0;k<v[i+1].size();k++){ 
                        yum=0;
                        for(ll j=0;j<v[i].size();j++){
                        	if(j==v[i].size()-1)
                        	{
                        		loc=0;
                        	}
                        	else
                        	{
                        		loc=j+1;
                        	}
                            temp=abs(v[i][j]-v[i+1][k])*(i+1) + z[i-1][loc];
                            if(temp>=yum){
                                yum=temp;
                            }
                        }
                        z[i].push_back(yum);
                    }
                }
     
                if(i==0){

                	ll max=0,min=10000001;
    				for(ll k=0;k<v[0].size();k++){
    					if(max<=v[0][k])
    						max=v[0][k];

    					if(min>=v[0][k])
    						min=v[0][k];
    				}

    				ll only[2];
    				only[0]=max;
    				only[1]=min;

                    for(ll k=0;k<v[i+1].size();k++){ 
                        yum=0;
                        for(ll j=0;j<2;j++){
                            if(abs(only[j]-v[1][k])>=yum)
                                yum=abs(only[j]-v[1][k]);
                        }
                        z[0].push_back(yum);
                    }
                }
                i++;
            }
     
            ll max=0;
            for(ll k=0;k<z[n-2].size();k++){
                if(max<=z[n-2][k])
                    max=z[n-2][k];
            }
            cout<<max<<endl;
        }	
        return 0;
    }
     