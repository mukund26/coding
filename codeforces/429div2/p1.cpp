#include <bits/stdc++.h>
using namespace std;
int a[26];
int n,k,m;
bool compare(int x,int y){
	return x>y;
}
int main(){
	cin>>n>>k;
	m=k;
	for (int i=1;i<=n;i++){
		char s;
		scanf(" %c",&s);
		a[s-'a']++;
	}
	sort(a,a+26,compare);
	a[0]>k?printf("NO"):printf("YES");
	return 0;
}