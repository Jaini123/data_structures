#include<iostream>
using namespace std;
#define max_size 101
class Stack{
	private:
		int A[max_size];
		int top;
	public:
		Stack(){
			top=-1;
		}
		void Push(int x){
			if(top==max_size-1){
				cout<<"overflow";
				return;
			}
			else A[++top]=x;
		}
		void Pop(){
			if(top==-1){
				cout<<"no element to pop";
				return;
			}
			else top--;
		}
		int Top(){
			return A[top];
		}
		bool IsEmpty(){
			if(top==-1)
			return true;
			else return false;
		}
		void Print(){
			for(int i=0;i<=top;i++){
				cout<<A[i];
			}
		}
};

int main(){
	Stack s;
	s.Push(2); 
	s.Push(3); 
	s.Push(4); 
	s.Push(5);
	s.Print();
	s.Pop();
	cout<<endl;
	s.Print();
	return 0;
	
}
