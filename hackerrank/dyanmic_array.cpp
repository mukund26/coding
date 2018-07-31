#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector< vector < int >  >v(n);
    int t,x,y,lastanswer=0,pos,loc;
    while(q--){
    	
    	cin>>t>>x>>y;
    	if(t==1){
    		pos=((x^lastanswer)%n);
    		v[pos].push_back(y);
	    }
	    if(t==2){
	    	pos=((x^lastanswer)%n);
	    	loc=y%v[pos].size();
	    	lastanswer=v[pos][loc];
	    	cout<<lastanswer<<endl;
	    }
    }
    return 0;
}