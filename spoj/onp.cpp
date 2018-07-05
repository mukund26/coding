#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

int order(char c){
	if(c=='+') return 1;
	if(c=='-') return 2;
	if(c=='*') return 3;
	if(c=='/') return 4;
	if(c=='^') return 5;
	return -1;
}

void polish(string s){
	stack<char> st;
	st.push('X');
	string p;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a' && s[i]<='z')
			p+=s[i];
		else if(s[i]=='(')
			st.push('(');
		else if(s[i]==')'){
			while(st.top()!='X'&&st.top()!='('){
				p+=st.top();
				st.pop();
			}
			if(st.top()=='(')
				st.pop();
		}
		else{
			while(st.top()!='X' && order(s[i])<=order(st.top())){
				p+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	 while(st.top() != 'X')
    {
        char c = st.top();
        st.pop();
        p += c;
    }
	cout<<p<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		polish(s);
	}
	return 0;
}
