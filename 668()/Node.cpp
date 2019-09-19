#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next,*pre;
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
		set_pre(Node*pre)
		{
			this->pre=pre;
		}
		Node*get_pre()
		{
			return pre;
		}
};

