/** O(n) solution using stack 
	to find next greater element for each element in an unsorted array 
 **/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b;
	for(int i=0;i<n;i++)
		cin>>a[i];
	stack < int > s;
	s.push(a[0]);
       	for(int i=1;i<n;i++){
		b=s.top();
		s.pop();
		while(a[i]>b){
			cout<<a[i];
			if(s.empty())
				break;
			b=s.top();
			s.pop();
		}
		if(a[i]<=b)
			s.push(b);	
		s.push(a[i]);
	}	
	while(s.empty()==false){
		b=s.top();
		cout<<-1<<" ";
		s.pop();
	}
return 0;	
}
