#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next_node;
	public:
		set_value(int value)
		{
			this->value=value;
		}
		int get_value()
		{
			return value;
		}
		set_next_node(Node*next_node)
		{
			this->next_node=next_node;
		}
		Node*get_next_node()
		{
			return next_node;
		}
};
