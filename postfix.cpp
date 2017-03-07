#include<iostream>
#include<stack>
#include<string>
using namespace std;
int EvaluatePostFix(string exp,int n){
	int a,b;
	float c;
	stack<char> S;
	for(int i=0;i<n;i++){
		if(exp[i]!='+'&&exp[i]!='-'&&exp[i]!='*'&&exp[i]!='/')
		S.push(exp[i]);
		else{
			 a=S.top();
			S.pop();
			 b=S.top();
			S.pop();
			if(exp[i]=='*')
			 c=a*b;
			if(exp[i]=='/')
			c=a/b;
			if(exp[i]=='+')
			c=a+b;
			if(exp[i]=='-')
			 c=a-b;
			S.push(c);
			
		}
	}
	return S.top();
}
int main(){
	string exp;
	cin>>exp;
	int a;
	a=EvaluatePostFix(exp,exp.length());
	cout<<a;
}
