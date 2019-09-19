#include<iostream>
using namespace std;
class Node
{
	Node*next;
	int value;
	public:
		Node()
		{
			value=0;
			next=NULL;
		}
		void set_value(int value)
		{
			this->value=value;
		}
		int get_value()
		{
			return value;
		}
		void set_next(Node*next)
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
	Node*current;
	int size;
	public:
		Stack()
		{
			size=0;
			current=NULL;
		}
		void push(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size>0)
			new_node->set_next(current);
			current=new_node;
			size++;
		}
		int pop()
		{
			if(is_empty()!=true)
			{
//				cout<<"here"<<endl;
				int c=current->get_value();
				current=current->get_next();
				size--;
				return c;
			}
		}
		int top()
		{
			if(is_empty()!=true)
			{
				return current->get_value();
			}
		}
		bool is_empty()
		{
			if(size==0)
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
	s.push(4);
	cout<<"top="<<s.top()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
}

