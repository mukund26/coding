#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll good;

/*for(ll i=0;i<no;i++){
				cout<<i<<" : ";
				for(ll j=0;j<v[i].size();j++){
					cout<<v[i][j]<<" ";
				}
				cout<<endl;
			}*/

void binarysearch(vector < ll > &t,ll low,ll high,ll y){
	ll mid=(low+high)/2;
	if(low>high)
		return;
	if(t[mid]>=y){
		good=mid;
		binarysearch(t,low,mid-1,y);
	}
	else
		binarysearch(t,mid+1,high,y);
}

int main(){
		int t;
		cin>>t;
		while(t--){
			ll n,q,index=-1,block_size=0,no=0,j=0,mx=0;
			cin>>n>>q;
			ll a[n]; 
			no=(sqrt(n));
			block_size=ceil(float(n)/no);
			vector < vector <ll> > v(no); 
			cout<<no<<" * "<<block_size<<endl;
			for(ll i=0;i<n;i++){
				cin>>a[i];
				if(i%block_size==0){
					index++;
					j=0;
				}
				if(j==0){
					v[index].push_back(a[i]);
					j++;
					mx=a[i];
				}
				else{
					if(a[i]>mx){
						v[index].push_back(a[i]);
						mx=a[i];
						j++;
					}
				}				
			}	

			for(ll i=0;i<no;i++){
				cout<<i<<" : ";
				for(ll j=0;j<v[i].size();j++){
					cout<<v[i][j]<<" ";
				}
				cout<<endl;
			}

			while(q--){
				char ch;
				cin>>ch;
				if(ch=='?'){
					ll i,l,r,count=0,k=0,uindex=0,end;
					cin>>i>>l>>r;
					if(i<=block_size){
						uindex=0;
					}
					else{
						uindex=ceil(float(i-1)/block_size);
					}

					if(i%block_size==0){
						end=i;
					}
					else
					{
						end=i+block_size-(i%block_size);
					}

					for(k=i-1;k<end;k++){
						if(a[k]>=r){
							count++;
							l=r;
							break;
						}
						if(a[k]>=l){
							count++;
							l=a[k]+1;
						}	
						if(l>r){
							l=r;
							break;
						}
					}
					if(l==r)
					{
						cout<<count<<endl;
						continue;
					}					
					k=uindex+1;
					for(;k<no;k++){
						good=-1;
						binarysearch(v[k],0,v[k].size()-1,l);
						if(good>=0)	{
							if(r>v[k][v[k].size()-1]){
								count+=(v[k].size()-good);
								l=v[k][v[k].size()-1]+1;
							}
							if(r==v[k][v[k].size()-1]){
								count+=(v[k].size()-good);
								break;
							}
							if(r<v[k][v[k].size()-1]){
								for(ll hmm=good;hmm<v[k].size();hmm++){
									if(v[k][hmm]>=r){
										count++;
										l=r;
										break;
									}
									if(v[k][hmm]>=l){
										count++;
										l=v[k][hmm]+1;
									}
									if(l>r){
										l=r;
										break;
									}
								}
								break; 
							}			
						}
					}	
					cout<<count<<endl;
				}

				if(ch=='+'){
					ll x,i,uindex,location,end,hmax;
					cin>>i>>x;
					a[i-1]+=x;

					if(i<=block_size){
						uindex=0;
						location=i-1;
					}

					else{
						uindex=ceil(float(i)/block_size)-1;
						location=(i%block_size)-1;
						if(i%block_size==0){
							location=block_size-1;
						}
					}

					v[uindex].clear();
					v[uindex].push_back(a[(uindex)*block_size]);
					hmax=a[(uindex)*block_size];
					end=(uindex)*block_size+block_size;
					
					for(ll hid=(uindex)*block_size+1;hid<end;hid++){
							if(hmax<a[hid]){
								v[uindex].push_back(a[hid]);
								hmax=a[hid];
							}
						}			
				} 
			}
		}
		return 0;
	}