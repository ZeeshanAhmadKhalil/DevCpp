#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
	public:
		Node()
		{
			value=0;
			next=NULL;
		}
		void set_value(int value)
		{
			this->value=value;
		}
		int get_value()
		{
			return value;
		}
		void set_next(Node* next)
		{
			this->next=next;
		}
		Node* get_next()
		{
			return next;
		}
};
class Queue
{
	Node*front,*rare;
	public:
	Queue()
	{
		front=rare=NULL;
	}
	void sort()
	{
		int c;
		Node*f=front;
		for(int i=1;i<=5;i++)
		{
			while(front!=rare)
			{
				if(front->get_value()>front->get_next()->get_value())
				{
					c=front->get_value();
					front->set_value(front->get_next()->get_value());
					front->get_next()->set_value(c);
				}
				front=front->get_next();
			}
			front=f;
		}
	}
	void enqueue(int value)
	{
		Node*new_node=new Node();
		new_node->set_value(value);
		if(front==NULL)
		{
			front=rare=new_node;
		}
		else
		{
			rare->set_next(new_node);
			new_node->set_next(NULL);
			rare=new_node;
		}
		sort();
	}
	int get_front()
	{
		if(is_empty()==false)
		return front->get_value();
	}
	int dequeue()
	{
		if(is_empty()==false)
		{
			int f=front->get_value();
			if(front==rare)
			{
				front=rare=NULL;
			}
			else
			{
				front=front->get_next();
			}
			return f;
		}
	}
	bool is_empty()
	{
		if(front==NULL)
		return true;
		return false;
	}
};
main()
{
	Queue q;
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
//	cout<<q.dequeue()<<endl;
//	cout<<q.get_front()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
	q.enqueue(0);
	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
}
