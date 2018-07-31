#include <iostream>
#include <stack>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
Node *head;

void insert(int x)
	{
		Node *temp=new Node;
		temp->data=x;
		temp->next=head;
		head=temp;
	}

void print()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

void add(int x,int y)
	{
		Node *temp=head;
		while(y--!=1)
		{
			temp=temp->next;
		}
		Node *temp1=new Node;
		temp1->data=x;
		temp1->next=temp->next;
		temp->next=temp1;
	}

void del(int x)
	{
		Node *temp=head;
		if(x==1)
		{
			head=temp->next;
			delete temp;
		}
		else
		{
			while(x--!=2)
		{
			temp=temp->next;
		}
		Node *temp1=new Node;
		temp1=temp->next;
		temp->next=temp1->next;
		delete temp1;	
		}
		
	}


void revpermanent()
	{
		Node *temp,*temp1,*next;
		temp=head;
		temp1=NULL;
		while(temp!=NULL)
		{
			next=temp->next;
			temp->next=temp1;
			temp1=temp;
			temp=next;
		}
		head=temp1;
	}

void revtemp(Node *head)
	{
		Node *temp=head;
		if(temp==NULL)
		{
			return; 
		}
		revtemp(temp->next);
		cout<<temp->data<<" ";
	}

void Reverse(Node *p)
	{
		if(p->next==NULL)
		{
			head=p;
			return; 
		}
		Reverse(p->next);
		Node *q=p->next;
		q->next=p;
		p->next=NULL;
	}

int main()
{

	head=NULL;
	int i=1;
	while(i<=5)
	{
		insert(i);
		print();
		i++;
	}
	add(6,3); // adds node at given location
	print();  
	del(1);
	print();
	revpermanent();
	print();
	revtemp(head);
	cout<<endl;
	Reverse(head);
	print();	
	stack <struct Node*> s;
	Node *temp=head;
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	temp=s.top();
	head=temp;
	s.pop();
	while(!s.empty())
	{
		temp->next=s.top();
		s.pop();
		temp=temp->next;
	}
	temp->next=NULL;
	print();
	return 0;
}
