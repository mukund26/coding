#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }   
    for(int i=0;i<n;i++)
    	cout<<a[(i+d)%n]<<" ";
    cout<<endl;
    return 0;
}
