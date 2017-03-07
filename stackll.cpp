#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *link;
};
struct Node *top;
void Push(int x){
	Node *newnode=new Node;
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}
void Pop(){
	Node *temp;
	if(top==NULL) return;
	temp=top;
	top=top->link;
	delete(temp);
}
void Print(){
	Node *temp=top;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->link;
	}
}
int main(){
	top=NULL;
	Push(2);
	Push(3);
	Push(4);
	Push(5);
	Print();
}
