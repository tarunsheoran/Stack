#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(2);
	s.push(6);
	
	s.pop();
	cout<<"Top element in stack is = "<<s.top() << endl;
	
	if(s.empty()){
		cout<<"Stack is empty";
	}
	else {
		cout<<"Stack is not empty";
	}
}
