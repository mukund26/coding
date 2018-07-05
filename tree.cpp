#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;
#define INF 1000000000

int scan(){
    register int c=getchar_unlocked();
    register int n=0;
    for(;c<48||c>57;c=getchar_unlocked());
    for(;c>47&&c<58;c=getchar_unlocked()){
        n= (n<<1)+(n<<3)+c-48;
    }
    return n;
}

struct node{
    int data;
    node *left,*right;
};

node *newnode(int data){
    node *temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

node *insert(node* root,int x){
    if(root==NULL)
        root=newnode(x);
    else if(root->data>=x)
        root->left=insert(root->left,x);
    else 
        root->right=insert(root->right,x);
    return root;
}

node* minimum(node *root){
    if(root->left==NULL)
        return root;
    else
        return minimum(root->left);
}

node* maximum(node *root){
    if(root->right==NULL)
        return root;
    else
        return maximum(root->right);
}

void preorder(node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    if(root->left!=NULL) preorder(root->left);
    if(root->right!=NULL) preorder(root->right);
}

void inorder(node *root){
    if(root==NULL) return;
    if(root->left!=NULL) inorder(root->left);
    cout<<root->data<<" ";
    if(root->right!=NULL) inorder(root->right);
}

void postorder(node *root){
    if(root==NULL) return;
    if(root->left!=NULL) postorder(root->left);
    if(root->right!=NULL) postorder(root->right);
     cout<<root->data<<" ";
}

int height(node* root){
    if(root==NULL)
        return -1;
    return max(height(root->left),height(root->right))+1;
}

void bfs(node* root){
    if(root==NULL) return;
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        q.pop();
    }
}

node* delete_node(node* root,int x){
    if(root==NULL) return NULL;
    if(root->data<x) root->right = delete_node(root->right,x);
    else if(root->data>x) root->left= delete_node(root->left,x);
    else{
        if(root->left==NULL){
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            node *temp=minimum(root->right);
            root->data=temp->data;
            root->right = delete_node(root->right,temp->data);
        }
    }
    return root;
}

int main(){
	int n=scan();
    node *root;
    root=NULL;
    while(n--){
        int x=scan();
        root=insert(root,x);
    }
    cout<<minimum(root)->data<<endl;
    cout<<maximum(root)->data<<endl;
    preorder(root); cout<<endl;
    inorder(root); cout<<endl;
    postorder(root); cout<<endl;
    bfs(root); cout<<endl;
    cout<<height(root)<<endl;
    root=delete_node(root,6);
    preorder(root); cout<<endl;
	return 0;
}
