#include<iostream>
using namespace std;
class node
{
	node*nextNode=new node();
	int data;
	public:
		set_data(int data)
		{
			this->data=data;
		}
		int get_data()
		{
			return data;
		}
		set_nextNode(node*nextNode)
		{
			this->nextNode=nextNode;
		}
		node*get_nextNode()
		{
			return nextNode;
		}
};
main()
{
}
