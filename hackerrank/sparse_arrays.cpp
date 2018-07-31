#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n;
	cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
    	cin>>s[i];
    }
    int q;
    cin>>q;
    while(q--){
    	string str;
    	cin>>str;
    	int count=0;
    	for(int i=0;i<n;i++){
    		if(str==s[i]){
    			count++;
    		}
    	}
    	cout<<count<<endl;
    }
    return 0;
}
