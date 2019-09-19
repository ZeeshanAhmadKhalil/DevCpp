#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
	Node*pre;
	public:
	set_value(int v)
	{
		value=v;
	}
	int get_value()
	{
		return value;
	}
	set_next(Node*n)
	{
		next=n;
	}
	Node*get_next()
	{
		return next;
	}
	set_pre(Node*n)
	{
		pre=n;
	}
	Node*get_pre()
	{
		return pre;
	}
};
