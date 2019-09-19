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
		set_next(Node*Next)
		{
			this->next=next;
		}
		Node*get_nexy()
		{
			return next;
		}
};
