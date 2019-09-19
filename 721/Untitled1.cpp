#include<iostream>
#include<conio.h>
using namespace std;
class Node
{
private:
int data;
Node* nextnode;
public:
int get()
{
return data;
}
void set(int data)
{
this->data=data;
}
Node* getnext()
{
return nextnode;
}
void setnext(Node* nextnode)
{
this->nextnode=nextnode;
}

 };
 class queue
{
	private:
	Node *rear,*front;
	int value,size;
	public:
	queue()
	{
//	front=new Node;
//	front->setnext(NULL);
 	size=0;
        rear=NULL;
		front=NULL;

	}
	 int length()
		   {
		   	return size;
		   }
	void enqueue(int x)
	{
	Node* newnode=new Node();
	newnode->set(x);
	if(rear==NULL && front==NULL)
	{
	newnode->setnext(NULL);
	front=newnode;
	rear=newnode;
	}
	else
	{
//		newnode->setnext(rear->getnext());
	rear->setnext(newnode);
	newnode->setnext(NULL); 
		rear=newnode;

	}
	size++;
	}
		void display()
		   {
		   	Node *temp=front;
		   	for(int i=1;i<=size;i++)
		   	{
		   		cout<<front->get()<<",";
		   		front=front->getnext();
			   }
			   front=temp;
		   }
	};
		int main()
	{
	queue q;
	 cout << "Initial size of list: " <<q.length()<< endl; 
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.display();
	}

