#include <bits/stdc++.h>
using namespace std;
 
typedef long long int  ll;
 
/* spar5h */
 
int main(){
 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n, q;
 
    cin>>t;
 
    while(t--) {
 
        cin>>n>>q;
 
        ll a[n + 1];
 
        for(int i = 1; i <= n; i++)
            cin>>a[i];
 
        int N = (int)sqrt(n);
 
        vector<ll> srdL[n + 1];
        ll srdR[n + 1];
 
        int sz = 1, pos = 1;
 
        while(1) {
 
				int i = 0; ll mx = 0;
 
				while(i < N && pos + i <= n) {
 
					if(a[pos + i] > mx) {
						mx = a[pos + i]; srdL[sz].push_back(mx);
					}
 
					i++;
				}
 
				srdR[sz] = mx;
 
				if(pos + i > n)
					break;
 
				pos += N; sz++;
        }
        
        while(q--) {
                
                char ch;
                cin>>ch;
                
				if(ch == '?') {
 
                    int index;
                    ll l, r;
				
                    cin>>index>>l>>r;
                    l--;
 
					ll ans = 0;
 
					int sqrtIndex = (index - 1) / N + 1;
					bool rMax = false;
 
					while(index <= min(N * sqrtIndex, n)) {
 
						if(a[index] > l) {
							l = a[index];
							ans++;
 
						}
 
						if(a[index] >= r) {
							rMax = true; break;
						}
 
						index++;
 
 					}
 
					sqrtIndex++;
 
					if(rMax || sqrtIndex > sz) {
						cout<<ans<<endl; continue;
					}
 
					while(sqrtIndex <= sz) {
 
						if(srdR[sqrtIndex] >= r) {
							rMax = true; break;
						}
 
						int left = 0, right = srdL[sqrtIndex].size() - 1;
						int add = 0;
 
						while(left <= right) {
 
							int mid = (left + right) / 2;
 
							if(srdL[sqrtIndex][mid] > l) {
 
								right = mid - 1;
								add = srdL[sqrtIndex].size() - mid;
							}
 
							else {
 
								left = mid + 1;
							}
						}
 
						l = max(srdR[sqrtIndex], l);
						ans += add;
 
						sqrtIndex++;
					}
 
					if(sqrtIndex > sz) {
						cout<<ans<<endl; continue;
					}
 
					index = (sqrtIndex - 1) * N + 1;
 
					while(index <= min(N * sqrtIndex, n)) {
 
						if(a[index] > l) {
							l = a[index]; ans++;
						}
 
						if(r <= l) {
							rMax = true; break;
						}
 
						index++;
					}
 
					cout<<ans<<endl;
				}
 
				else {
 
                    int index;
                    ll x;
				
					cin>>index>>x;
 
					a[index] += x;
 
					int sqrtIndex = (index - 1) / N + 1;
 
					int i = 0; ll mx = 0;
                    
                    srdL[sqrtIndex].clear();
                    
					pos = (sqrtIndex - 1) * N + 1;
 
					while(i < N && pos + i <= n) {
 
						if(a[pos + i] > mx) {
							mx = a[pos + i]; srdL[sqrtIndex].push_back(mx);
						}
 
						i++;
					}
 
					srdR[sqrtIndex] = mx;
				}
			}
        
    }
 
    return 0;
} 