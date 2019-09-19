#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
	public:
		set_value(int value)
		{
			this->value=value;
		}
		int get_value()
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
class Stack
{
	Node*head;
	int size;
	public:
		Stack()
		{
			head=NULL;
			size=0;
		}
		push(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size>0)
			new_node->set_next(head);
			else
			new_node->set_next(NULL);
			head=new_node;
			size++;
		}
		int top()
		{
			if(is_empty()==false)
			return head->get_value();
		}
		int pop()
		{
			if(is_empty()==false)
			{
				Node*h=head;
				int value=h->get_value();
				head=head->get_next();
				delete h;
				return value;
			}
		}
		bool is_empty()
		{
			if(head==NULL)
			return true;
			return false;
		}
};
main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	s.pop();
	s.pop();
	cout<<s.top()<<endl;
}
