#include<iostream>
using namespace std;
class Node
{
	int value;
	int*nextNode;
	public:
	set(int value)
	{
		this->value=value;
	}
};
main()
{
	Node*n=new Node();
	n->set(1);
}
