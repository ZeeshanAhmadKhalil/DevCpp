#include<iostream>
using namespace std;
class Node
{
	int object;
	Node*next_node;
	public:
		set_obj(int obj)
		{
			object=obj;
		}
		int get_obj()
		{
			return object;
		}
		set_next(Node*next)
		{
			next_node=next;
		}
		Node*get_next()
		{
			return next_node;
		}
};
