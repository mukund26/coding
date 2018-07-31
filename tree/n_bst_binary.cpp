#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

/*void inorder(Node *root){
	if (root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}*/

bool isbst(Node *root,int minv,int maxv){
	if(root==NULL) return true;

	if(root->data>minv&&root->data<maxv&&isbst(root->left,minv,root->data)&&isbst(root->right,root->data,maxv))
		return true;
	else 
		return false;
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
	//inorder(root);
	//cout<<INT_MIN<<endl;
	if(isbst(root,INT_MIN,INT_MAX)==true){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}


// O(n) solution