#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
struct node *head;
void Insert(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	 head=temp;
	 
	 node *temp1=head;
	 
	while(temp1->next!=NULL)
	temp1=temp1->next;
	temp1->next=temp;
	temp->next=NULL;	
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
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the no"<<endl;
		cin>>x;
		Insert(x);
		Print();
	}
	return 0;
}
