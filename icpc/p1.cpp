#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int store[3];
int temp[3];
vector < vector < int > > v(3);

int compare(int j){
		int i=0,c=0;
		if((v[i][j]>=v[i+1][j]&&v[i][j]>=v[i+2][j]&&v[i+1][j]>=v[i+2][j])){
				store[0]=1;
				store[1]=2;
				store[2]=3;
			}
			else
			if((v[i][j]>=v[i+1][j]&&v[i][j]>=v[i+2][j]&&v[i+1][j]<=v[i+2][j])){
				store[0]=1;
				store[1]=3;
				store[2]=2;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]>=v[i+2][j]&&v[i+1][j]>=v[i+2][j])){
				store[0]=2;
				store[1]=1;
				store[2]=3;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]<=v[i+2][j])){
				store[0]=3;
				store[1]=2;
				store[2]=1;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]>=v[i+2][j])){
				store[0]=3;
				store[1]=1;
				store[2]=2;	
			}
			else
			if((v[i][j]>=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]<=v[i+2][j]))
			{
				store[0]=2;
				store[1]=3;
				store[2]=1;	
			}
			else
			{
				store[0]=0; store[1]=0; store[2]=0;
				c++;
			}
			return c;
}

int compared(int j){
		int i=0,c=0;
		if((v[i][j]>v[i+1][j]&&v[i][j]>v[i+2][j]&&v[i+1][j]>v[i+2][j])){
				temp[0]=1;
				temp[1]=2;
				temp[2]=3;
			}
			else
			if((v[i][j]>=v[i+1][j]&&v[i][j]>=v[i+2][j]&&v[i+1][j]<=v[i+2][j])){
				temp[0]=1;
				temp[1]=3;
				temp[2]=2;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]>=v[i+2][j]&&v[i+1][j]>=v[i+2][j])){
				temp[0]=2;
				temp[1]=1;
				temp[2]=3;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]<=v[i+2][j])){
				temp[0]=3;
				temp[1]=2;
				temp[2]=1;	
			}
			else
			if((v[i][j]<=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]>=v[i+2][j])){
				temp[0]=3;
				temp[1]=1;
				temp[2]=2;	
			}
			else 
			if((v[i][j]>=v[i+1][j]&&v[i][j]<=v[i+2][j]&&v[i+1][j]<=v[i+2][j]))
			{
				temp[0]=2;
				temp[1]=3;
				temp[2]=1;	
			}
			else
			{
				temp[0]=0; temp[1]=0; temp[2]=0;
				c++;
			}
			return c;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int s1,s2,s3;	
		int j,flag=1;
		for(int i=0;i<3;i++){
			cin>>s1>>s2>>s3;
			v[i].push_back(s1);
			v[i].push_back(s2);
			v[i].push_back(s3);
		}
		int count=0;
		count+=compare(0);
		j=1;
		for(;j<=2;j++){
			count+=compared(j);
			if(temp[0]==store[0]&&temp[1]==store[1]&&temp[2]==store[2])
			{
				flag=1;
			}
			else{
				flag=0;
				break;
			}
		}
		if(count<3&&flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
			
	}
	return 0;
}