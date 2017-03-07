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
	if(head!=NULL){
		temp=temp->next;
	}
	temp->next=NULL;
	head=temp;
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
