#include <bits/stdc++.h>
using namespace std;
typedef long long ll;	

ll maxSubArraySum(ll a[], ll size)
{
    ll msf = INT_MIN, meh = 0;
    for (ll i = 0; i < size; i++)
    {
        meh = meh + a[i];
        if (msf < meh)
            msf = meh;
        if (meh < 0)
            meh = 0;
    }
    return msf;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n],sum=0,pref[n],end[n],p=INT_MIN,e=INT_MIN,array_sum=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			array_sum+=a[i];
		}
		pref[0]=a[0];
		end[n-1]=a[n-1];
		if(p<=a[0])
			p=a[0];
		if(e<=a[n-1])
			e=a[n-1];
		for(ll i=1;i<n;i++){
			pref[i]=a[i]+pref[i-1];
			if(p<=pref[i])
				p=pref[i];
		}
		for(ll i=n-2;i>=0;i--){
			end[i]=a[i]+end[i+1];
			if(e<=end[i])
				e=end[i];
		}
		if(array_sum>=0){
			if(k==1) cout<<maxSubArraySum(a,n)<<endl;
			else {
				cout<<max(maxSubArraySum(a,n),p+e+((k-2)*array_sum))<<endl;
			}
		}
		else{
			if(k==1) cout<<maxSubArraySum(a,n)<<endl;
			else cout<<max(maxSubArraySum(a,n),p+e)<<endl;
		}	
	}
	return 0;
}