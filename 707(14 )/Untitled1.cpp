#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
	public:
		set_value(int value)
		{
			this->value=value;
		}
		int get_value()
		{
			return value;
		}
		set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
		}
};
class Queue
{
	Node*rare,*front;
	int size;
	public:
		Queue()
		{
			size=0;
			rare=front=NULL;
		}
		enqueue(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size!=0)
			rare->set_next(new_node);
			new_node->set_next(NULL);
			if(size==0)
			front=new_node;
			rare=new_node;
			size++;
		}
		int dequeue()
		{
			if(is_empty()==0)
			{
				int value=front->get_value();
				Node*f=front;
				front=front->get_next();
				delete f;
				size--;
				return value;
			}
			cout<<"-1 means Empty"<<endl;
			return -1;
		}
		int get_front()
		{
			if(is_empty()==0)
			return front->get_value();
			cout<<"-1 means Empty"<<endl;
			return -1;
		}
		bool is_empty()
		{
			return size==0;
		}
		get()
		{
			cout<<"size="<<size<<endl;
			cout<<"front="<<front->get_value()<<endl;
			cout<<"rare="<<rare->get_value()<<endl;
		}
};
main()
{
	Queue q;
	int choice,value,n;
	label:
	cout<<endl<<endl;
	cout<<"Enter 1 to enqueue"<<endl;
	cout<<"Enter 2 to dequeue"<<endl;
	cout<<"Enter 3 to get front"<<endl;
	cout<<"Enter any other to exit"<<endl;
	cout<<"choice=";
	cin>>choice;
	cout<<endl<<endl;
	if(choice==1)
	{
		cout<<"How many numbers you want to enqueue"<<endl;
		cin>>n;
		cout<<"Enter values"<<endl;
		for(int i=1;i<=n;i++)
		{
			cin>>value;
			q.enqueue(value);
		}
		goto label;
	}
	else if(choice==2)
	{
		cout<<"dequeued number="<<q.dequeue()<<endl;
		goto label;
	}
	else if(choice==3)
	{
		cout<<"front number="<<q.get_front()<<endl;
		goto label;
	}
}
