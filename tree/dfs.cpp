#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void preorder(Node *root){
	if (root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node *root){
	if (root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void inorder(Node *root){
	if (root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

Node * insert(Node *root,int v){
	if(root==NULL){
		Node *temp=new Node;
		temp->data=v;
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
	}
	else if(v<=root->data){
		root->left=insert(root->left,v);
	}
	else
		root->right=insert(root->right,v);

	return root;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	Node *root=NULL;
	int i=5,val;
	while(i--){
		cin>>val;
		if(root==NULL){
			Node *temp=new Node;
			temp->data=val;
			temp->left=NULL;
			temp->right=NULL;
			root=temp;
		}
		else{
			root=insert(root,val);
		}
	}
	preorder(root); cout<<endl;
	postorder(root); cout<<endl;
	inorder(root); cout<<endl;
	return 0;
}