#include<bits/stdc++.h>
using namespace std;

int main(){
	int d,m,y;
	cin>>d>>m>>y;
	int mm[]={0,3,2,5,0,3,5,1,4,6,2,4};
	int yy,c,l=0;
	y-=m<3;
	yy= (y+y/4-y/100+y/400+mim[m-1]+d)%7;
	switch(yy){
	case 0: cout<<"Sunday"; break;
	case 1: cout<<"Monday"; break;
 	case 2: cout<<"Tuesday"; break;
	case 3: cout<<"wednesday"; break;
	case 4: cout<<"thursday"; break;
	case 5: cout<<"friday"; break; 
	case 6: cout<<"saturday"; break;
	}	
}
