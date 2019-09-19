#include<iostream>
using namespace std;

class Node
{
	private:
		int value;
		Node*nextNode;
	public:
		int get()
		{ 
			return value; 
		}
		void set(int value)
		{
			this->value=value; 
		}
		Node*getNext() 
		{ 
			return nextNode; 
		}
		void setNext(Node*nextNode) 
    	{
			this->nextNode=nextNode; 
		}
};
Node*headNode;
Node*currentNode=NULL;
int size = 0;
add(int value)
{
	Node*newNode;
	newNode->set(value);
	if(currentNode!=NULL)
	{
		cout<<"asdasdasd";
	}
};
main()
{
	add(2);
}
