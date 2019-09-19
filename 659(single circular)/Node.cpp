#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
	Node*previous;
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
		set_previous(Node*previous)
		{
			this->previous=previous;
		}
		Node*get_previous()
		{
			return previous;
		}
};
