#include <bits/stdc++.h>
using namespace std;
int good,x;

void binarysearch(int a[],int low,int high)
{
	int mid=(low+high)/2;
	if(low>high)
		return;
	if(a[mid]==x)
	{
		good=mid;
		binarysearch(a,low,mid-1);
	}
	if(a[mid]>x)
		binarysearch(a,low,mid-1);
	if(a[mid]<x)
		binarysearch(a,mid+1,high);
}


int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	sort(a,a+size);
	cin>>x;
	good=-1;
	binarysearch(a,0,size-1);
	if(good==-1)
		cout<<"no";
	cout<<good<<endl;
	return 0;
}