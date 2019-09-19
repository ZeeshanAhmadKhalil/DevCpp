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
		sort()
		{
			int c;
			Node*a=front;
			for(int i=1;i<size;i++)
			{
				for(int i=1;i<size;i++)
				{
						if(front->get_value()>front->get_next()->get_value())
					{
						c=front->get_value();
						front->set_value(front->get_next()->get_value());
						front->get_next()->set_value(c);
					}
					front=front->get_next();
				}
				front=a;
			}
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
			sort();
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
			return -1;
		}
		int get_front()
		{
			if(is_empty()==0)
			return front->get_value();
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
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
}
