#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

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
	i=0;
	val=13;
	while(root!=NULL){
		if(val==root->data){
			cout<<i<<endl;	
			break;
		}
		else
			if(val<root->data){
				root=root->left;
				i=2*i+1;
			}
		else
			if(val>root->data){
				root=root->right;
				i=2*i+2;
			}
	}
	return 0;
}