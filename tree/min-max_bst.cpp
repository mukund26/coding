#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *minimum(Node *root){
	if(root->left==NULL)
		return root;
	else
		minimum(root->left);
}

Node *maximum(Node *root){
	if(root->right==NULL)
		return root;
	else
		maximum(root->right);
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
	Node *m=minimum(root);
	cout<<"minimum : "<<m->data<<endl;
	m=maximum(root);
	cout<<"maximum : "<<m->data<<endl;
	return 0;
}