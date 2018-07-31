#include <bits/stdc++.h>
using namespace std;

void array(int ar[])
	{
		ar[0]=ar[0]*2;
	}

int main()
	{
		int A[5]={1,2,3,4,5};
		array(A);
		cout<<A[0];
	}