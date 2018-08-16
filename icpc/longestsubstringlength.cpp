#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int a[128],count=0,last[128],i,max=0,j;
	memset(a,0,sizeof(a));
	memset(last,0,sizeof(last));
	for(int i=0;i<s.length();i++){
			a[s[i]-'\0']=1;
	}
	i=0;
	while(i<s.length()){
		if(a[s[i]-'\0']){
			count++;
			a[s[i]-'\0']=0;
			last[s[i]-'\0']=i;
			//cout<<i<<" "<<s[i]<<endl;
			i++;
		}
		else{
			if(max<=count) {max=count;}
			//cout<<max<<endl;
			count=0;
			j=i;
			for (;j>=0;j--)
				a[s[j]-'\0']=1;
			i=last[s[i]-'\0']+1;
		}
	}
	if(max<=count) max=count;
	cout<<max<<endl;
}