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
		set(int value)
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
main()
{
	
}
