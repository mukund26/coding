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
		int height(node *root){
			if (root==NULL)
				return -1;
			return max(height(root->left),height(root->right))+1;
		}
		void inorder(node *root){
			if (root==NULL) return;
			if(root->left!=NULL) inorder(root->left);
			cout<<root->data<<" ";
			if(root->right!=NULL) inorder(root->right); 
		} 		
		void preorder(node *root){
			if (root==NULL) return;
			cout<<root->data<<" ";
			if(root->left!=NULL) preorder(root->left);
			if(root->right!=NULL) preorder(root->right); 
		} 		
		void postorder(node *root){
			if (root==NULL) return;
			if(root->left!=NULL) postorder(root->left);
			if(root->right!=NULL) postorder(root->right);
			cout<<root->data<<" "; 
		} 		
		void bfs(node *root){
			if(root==NULL) return;
			queue<node *> q;
			q.push(root);
			while(!q.empty()){
				node *temp=q.front();
				cout<<temp->data<<" ";
				if(temp->left!=NULL) q.push(temp->left);
				if(temp->right!=NULL) q.push(temp->right);
				q.pop();
			}
		}
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
	cout<<t.height(t.root)<<endl;
	//cout<<t.root<<endl;
	t.inorder(t.root); cout<<endl;
	t.postorder(t.root); cout<<endl;
	t.preorder(t.root); cout<<endl;
	t.bfs(t.root); cout<<endl;
	return 0;
}
