#include<iostream>
#include"Stack.cpp"
using namespace std;
main()
{
	Stack<char> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push('a');
//	s.top();
//	s.pop();
//	s.pop();
//	s.pop();
//	s.pop();
//	s.pop();
	cout<<s.top()<<endl;
	if(s.is_full()==true)
	cout<<"Stack is full"<<endl;
	else
	cout<<"Stack is not full"<<endl;
	if(s.is_empty()==true)
	cout<<"Stack is empty"<<endl;
	else
	cout<<"Stack is not empty"<<endl;
//	cout<<s.pop()<<endl;
//	cout<<s.pop()<<endl;
}
