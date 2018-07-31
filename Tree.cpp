// BST using Class Data Structure

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int scan(){
	register int c = getchar_unlocked();
	register int n = 0;
	register int neg = 0;
	for( ; (c<48||c>57)&&c!='-'; c=getchar_unlocked());
	if(c=='-'){
		neg=1;
		c=getchar_unlocked();
	}
	for( ;(c>=48&&c<=57); c=getchar_unlocked()){
		n = (n<<1) + (n<<3) + c - 48;
	}
	if(neg) return -n;
	else return n;
}

struct node{
	int data;
	node *left, *right;
};

class Tree{
public:
	node *root;
	Tree(){
		root=NULL;
	}
	node *newnode(int x){
		node *temp = new node;
		temp->data = x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	}
	node *insert(node *root,int x){
		if(root==NULL) 
			root = newnode(x);
		else if(root->data<x) 
			root->right = insert(root->right,x);
		else 
			root->left = insert(root->left,x);
		return root;
	}
	node *minimum(node *root){
		if(root->left==NULL) 
			return root;
		return minimum(root->left);
	}
	node *maximum(node *root){
		if(root->right==NULL) 
			return root;
		return maximum(root->right);
	}
	int height(node *root){
		if(root==NULL) return -1;
		return max(height(root->left),height(root->right))+1;
	}
	node *del_node(node *root,int x){
		if(root==NULL) return NULL;
		else if(root->data<x) root->right = del_node(root->right,x);
		else if(root->data>x) root->left = del_node(root->left,x);
		else{
			if(root->left==NULL){
				node *temp = root->right;
				delete root;
				return temp;	
			}
			else if(root->right==NULL){
				node *temp = root->left;
				delete root;
				return temp;
			}
			else{
				node *temp = minimum(root->right);
				root->data = temp->data;
				root->right = del_node(root->right,temp->data);
			}
		}
		return root;
	}
};


int main(){
	Tree t;
	int n=scan();
	while(n--){
		int x = scan();
		t.root = t.insert(t.root,x);
	}
	cout<<t.height(t.root)<<endl;
	return 0;
}
