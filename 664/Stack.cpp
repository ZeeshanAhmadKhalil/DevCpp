#include"Node.cpp"
#include<iostream>
using namespace std;
class Stack
{
	Node*head;
	int size;
	public:
		Stack()
		{
			size=0;
			head=NULL;
		}
		push(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			new_node->set_next(head);
			head=new_node;
			size++;
		}
		int pop()
		{
			if(is_empty()==false)
			{
				int n=head->get_value();
				Node*m=head;
				head=head->get_next();
				delete m;
				return n;
			}
			else
			return -1;
		}
		int top()
		{
			if(is_empty()==false)
			return head->get_value();
			else 
			return -1;
		}
		bool is_empty()
		{
			if(size==0)
			return true;
			return false;
		}
};
