#include<iostream>
#include"Node.h"
using namespace std;
int size=0;
Node*headNode=new Node();
Node*currentNode=new Node();
class List 
{
	public:
		List() 
		{
			headNode->setNext(NULL);
			currentNode=NULL;
			size = 0;	
		}
};
add(int value)
{
	Node*newNode=new Node();
	newNode->set(value);
	if(currentNode!=NULL)
	{
		newNode->setNext(currentNode->getNext());
		currentNode->setNext(newNode);
		currentNode=newNode;
	}
	else
	{
		headNode->setNext(newNode);
		newNode->setNext(NULL);
		currentNode=newNode;
	}
	size++;
}
next()
{
	if(currentNode==NULL)
	cout<<"Current Node is Null"<<endl;
	else if(currentNode->getNext()==NULL)
	cout<<"No Further Nodes to move next"<<endl;
	else
	{
		currentNode=currentNode->getNext();
		return 3;
	}
}
start()
{
	currentNode=headNode->getNext();
}
showCurrent()
{
	if(currentNode!=NULL)
	return currentNode->get();
}
main()
{
	int no_of_values,values,choice;
	List l;
	cout<<"Enter the number of values you want to enter"<<endl;
	cin>>no_of_values;
	cout<<"Enter the values"<<endl;
	for(int i=1;i<=no_of_values;i++)
	{
		cout<<"Node "<<i<<":";
		cin>>values;
		add(values);
	}
	cout<<"Current Value="<<showCurrent()<<endl;
	cout<<"Size="<<size<<endl;
	label2:
	cout<<"Enter your choice"<<endl;
	cout<<"0 for exiting the program"<<endl;
	cout<<"1 for entering another value."<<endl;
	cout<<"2 for moving current value to the start."<<endl;
	cout<<"3 for moving current value to the next node"<<endl;
	cout<<"4 for showing the current value"<<endl;
	cout<<"5 for showing the all values"<<endl;
	cout<<"6 for removing the current value(not coded so do not enter)"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 0:
			goto label1;
			break;
		case 1:
			{
			cout<<"Enter a value to add:"<<endl;
			cin>>values;
			add(values);
			break;
			}
		case 2:
			start();
			break;
		case 3:
			next();
			break;
		case 4:
			cout<<"Current Value="<<showCurrent()<<endl;
			break;
		case 5:
			{
			start();
			for(int i=1;i<=size;i++)
			{
				cout<<"Node "<<i<<":"<<showCurrent()<<endl;
				if(i==size)
				break;
				next();
			}
			cout<<"Current Value="<<showCurrent()<<endl;
			cout<<"Size="<<size<<endl;
			break;
			}
			cout<<"Wrong choice"<<endl;
	}
	goto label2;
	label1:
	cout<<"Thanks for using"<<endl;
}
