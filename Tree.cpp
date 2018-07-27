/* General implementation of BST using class */

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int scan(){
	register int c = getchar();
	register int n=0,neg=0;
	for( ; (c<48||c>57)&&c!='-' ; c=getchar());
	if(c=='-') { neg=1; c = getchar(); }
	for( ;c>=48&&c<=57;c=getchar()){
		n = (n<<1) + (n<<3) + c - 48;
	}	
	if(neg) return -n;
	else return n;
}

struct node{
	int data;
	node *left,*right;
};

class tree{
	public:
		node *root;
		tree(){
			root=NULL;
		}
		node* newnode(int x){
			node *temp=new node;
			temp->data=x;
			temp->left=temp->right=NULL;
			return temp;
		}
		node* insert(node *root,int x){
			if(root==NULL) root=newnode(x);
			else if(root->data>=x) root->left=insert(root->left,x);
			else root->right = insert(root->right,x);
			return root; 
		}
		node *minimum(node *root){
			if(root->left==NULL){
				return root;
			}
			else
				return minimum(root->left);
		}
		node *maximum(node *root){
			if(root->right==NULL)
				return root;
			else 
				return maximum(root->right);
		}
	/*	void print(node *root){
			if (root==NULL) return;
			if(root->left!=NULL) print(root->left);
			cout<<root->data<<" ";
			if(root->right!=NULL) print(root->right); 
		} */		
};


int main(){
	int a=scan();
	tree t;
	int x;
	while(a--){
		x=scan();
		t.root=t.insert(t.root,x);
	}
	cout<<t.minimum(t.root)->data<<endl;
	cout<<t.maximum(t.root)->data<<endl;
	//cout<<t.root<<endl;
	//t.print(t.root);
	return 0;
}
