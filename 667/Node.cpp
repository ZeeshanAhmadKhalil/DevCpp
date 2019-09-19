#include<iostream>
#include<string.h>
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
