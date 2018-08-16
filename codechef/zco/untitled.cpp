#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll int minimum(ll int a,ll int b)
{
    return min(a,b);
}

ll int findMinSum(long long int arr[],long long int n)
{
   ll int sum[n];
 
    // When there are less than or equal to
    // 2 elements
    sum[0] = arr[0];
    sum[1] = arr[1];
 
    // Iterate through all other elements
    for (ll int i=2; i<n; i++)
      sum[i] = arr[i] +
              minimum(sum[i-2], sum[i-1]);
 
    return minimum(sum[n-1], sum[n-2]);
}

int main()
{
	long long int n,i,j,min,loc=0;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%lld",&a[i]);	
	}
		
	min=findMinSum(a,n);
	cout<<min<<endl;
	return 0;
}
