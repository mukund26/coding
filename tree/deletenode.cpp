#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

void inorder(Node *root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

Node *FindMin(Node *root){
	if(root->left==NULL)
		return root;
	else
		FindMin(root->left);
}

Node *del(Node *root,int val){
	if(root==NULL) return root;
	else
	if(root->data>val) root->left=del(root->left,val);
	else if(root->data<val)
		root->right=del(root->right,val);
	else
	{
		if(root->left==NULL&&root->right==NULL){
			delete root;
			root=NULL;
		}
		else
		if(root->left==NULL)
		{
			Node *temp=root;
			root=root->right;
			delete temp;
		}
		else
		if(root->right==NULL){
			Node *temp=root;
			root=root->left;
			delete temp;
		}
		else{
			Node *temp=FindMin(root->right);
			root->data=temp->data;
			root->right=del(root->right,temp->data);
		}
	}
	return root;
}	

Node *insert(Node *root,int val){
	Node *temp=new Node;
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		if(root->data>=val)
			root->left=insert(root->left,val);
		else
			root->right=insert(root->right,val);
	}
	return root;
}

int main()
{
	int val,i=14;
	Node *root=NULL;
	while(i--){
		cin>>val;
		root=insert(root,val);
	}
	root=del(root,15);
	inorder(root);
	return 0;
}