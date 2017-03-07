#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
struct node *head;
void Insert(int x,int n){
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(n==1){
	temp->next=head;
	head=temp;
	return;}
	
	node *temp1=head;
	
	
	for(int i=0;i<n-2;i++){
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
};
	void Print(){
	struct node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
};

int main(){
	head=NULL;
	int x;
	Insert(2,1);
	Insert(5,2);
	Insert(6,3);
	Insert(8,4);
	Insert(1,3);
	Print();
	return 0;
}
