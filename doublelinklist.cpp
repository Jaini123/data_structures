#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
struct Node *head;
Node *GetNewNode(int x){
	Node *NewNode=new Node;
	NewNode->data=x;
	NewNode->prev=NULL;
	NewNode->next=NULL;
	return NewNode;
}
void InsertAtBeg(int x){
	struct Node *Nnode=GetNewNode(x);
	if(head==NULL){
		head=Nnode;
		return;
	}
	head->prev=Nnode;
	Nnode->next=head;
	head=Nnode;
}
void InsertAtEnd(int x){
	struct Node *Nnode=GetNewNode(x);
	struct Node *temp=head;
	if(head==NULL){
		head=Nnode;
		return;
	}
	
	while(temp->next!=NULL) temp=temp->next;
	temp->next=Nnode;
	Nnode->prev=temp;
}
void Print(){
	struct Node *temp=head;
	cout<<"Forward"<<end;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	head=NULL;
	InsertAtBeg(2);
	InsertAtBeg(4);
	InsertAtBeg(6);
	InsertAtBeg(8);
	InsertAtEnd(5);
	Print();
	return 0;
}



