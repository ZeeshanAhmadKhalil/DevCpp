#include<iostream>
#include<windows.h>
using namespace std;
class Node
{
	int element;
	Node*next,*previous;
	public:
	set_element(int ele)
	{
		element=ele;
	}
	int get_element()
	{
		return element;
	}
	set_next(Node*nex)
	{
		next=nex;
	}
	Node*get_next()
	{
		return next;
	}
	set_previous(Node*pre)
	{
		previous=pre;
	}
	Node*get_previous()
	{
		return previous;
	}
};
