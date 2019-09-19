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
class List 
{
	int size;
	public:
		List() 
		{
			Node*headNode;
			Node*currentNode;
			headNode->setNext(NULL);
			currentNode = NULL;
			size = 0;
		}
};
add(int value)
{
	List l;
	Node*newNode;
	newNode->set(value);
	if(currentNode==NULL)
	{
	}
};
int main()
{
	
}
