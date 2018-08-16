#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	memset(a,0,sizeof(a));
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	int k=0;
    	int z=0;
    	for(int i=0;i<n-1;i++)
    		{
    			if(a[i]<a[i+1])
    				k++;
    		}
    	if(k==n-1)
    		{
    			cout<<"Ugly";
    		}
    		else
    		{
    			sort(a,a+n);
    			for(int i=0;i<n;i++)
    			{
    				if(a[i]==i+1)
    				{
    					z=1;
    				}
    				else
    				{
    					z=0;
    					break;
    				}
    			}  
    			if(z==1)
    				cout<<"Beautiful";
    			else
    				cout<<"Ugly";  		
    		}
    	cout<<endl;
    }
    return 0;
}
