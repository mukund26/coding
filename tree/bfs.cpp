#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	Node *left;
	Node *right;
};

void bfs(Node *root){  //Level order traversal or bfs 
	if (root==NULL) return ;
	else {
		queue < Node *> q;
		q.push(root);
		while (!q.empty()){
			Node *current=q.front();
			cout<<current->data<<" ";
			if(current->left!=NULL) q.push(current->left);
			if(current->right!=NULL) q.push(current->right);
			q.pop(); //removing element
		}
	}
}

Node * insert(Node *root,char v){
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
	int i=11;
	char val;
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
	bfs(root);
	return 0;
}
