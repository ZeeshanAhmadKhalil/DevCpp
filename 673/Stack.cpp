#include"windows.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class Node
{
	float value;
	Node*next;
	public:
		set_value(float value)
		{
			this->value=value;
		}
		float get_value()
		{
			return value;
		}
		set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
		}
};
template<class T>
class Stack
{
	Node*head;
	int size;
	public:
	Stack();
	push(T value);
	T pop();
	T top();
	bool is_empty();
};
template<class T>
Stack<T>::Stack()
{
	size=0;
	head=NULL;
}
template<class T>
Stack<T>::push(T value)
{
	Node*new_node=new Node();
	new_node->set_value(value);
	new_node->set_next(head);
	head=new_node;
	size++;
}
template<class T>
T Stack<T>::pop()
{
	if(is_empty()==false)
	{
		T n=head->get_value();
		Node*m=head;
		head=head->get_next();
		delete m;
		return n;
	}
	else
	return -1;
}
template<class T>
T Stack<T>::top()
{
	if(is_empty()==false)
	return head->get_value();
	else 
	return -1;
}
template<class T>
bool Stack<T>::is_empty()
{
	if(head==NULL)
	return true;
	return false;
}
main()
{
	Stack<char> s;
	s.push('a');
	cout<<"top="<<s.top()<<endl;
}
