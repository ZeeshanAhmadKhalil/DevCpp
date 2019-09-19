#include<iostream>
#include"Node1.cpp"
using namespace std;
class List 
{
	Node*headNode;
	Node*currentNode;
	int size;
	public:
	List() 
	{
		headNode=NULL;
		currentNode=NULL;
		size=0;
	}
	get()
	{
		
	}
	add(int value)
	{
		Node*newNode=new Node();
		newNode->set(value);
		if(headNode==NULL)
		{
			headNode->setNext(newNode);
			newNode->setNext(NULL);
			currentNode=newNode;
		}
		else
		{
			newNode->setNext(currentNode->getNext());
			currentNode->setNext(newNode);
			currentNode=newNode;
		}
		size++;
}
};
main()
{
	List l;
	
}
