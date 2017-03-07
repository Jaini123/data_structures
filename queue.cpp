#include<iostream>
using namespace std;
#define n 101
class Queue{
	private:
		int A[n];
		int front,rear;
	public:
		Queue(){
			front=-1;
			rear=-1;
		}
		bool IsFull(){
			if(((rear+1)%n)==front)
				return true;
			else
				return false;
		}
		bool IsEmpty(){
			if(front==-1&&rear==-1)
				return true;
			else
				return false;
		}
		void Enqueue(int x){
			if(IsFull()){
				cout<<"queue is full"<<endl;
				return;
			}
			else if(IsEmpty()){
				front=rear=0;
			}
			else{
				rear=(rear+1)%n;
			}
			A[rear]=x;		
		}
		void Dequeue(){
			if(IsEmpty())
				return;
			else if(front==rear)
				front=rear=-1;
			else front=(front+1)%n;
		}
		int Front(){
			return A[front];
		}
		void Print(){
			for(int i=front;i<=rear;i++){
				cout<<A[i]<<" ";
			}
		}
};
int main(){
	Queue Q;
	Q.Enqueue(4);
	Q.Enqueue(5);
	Q.Enqueue(7);
	Q.Enqueue(9);
	Q.Print();
	cout<<endl;
	Q.Dequeue();
	cout<<Q.Front();
}
