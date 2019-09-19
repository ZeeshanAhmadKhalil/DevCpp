#include<iostream>
using namespace std;
template<class T>
class Node
{
	T value;
	Node*next;
	public:
		Node()
		{
			value=0;
			next=NULL;
		}
		set_value(T value)
		{
			this->value=value;
		}
		T get_value()
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
	Node<int>*front,*rare;
	public:		
	Queue()
	{
		front=rare=NULL;
	}
		enqueue(int value)
		{
			Node<int>*new_node=new Node<int>();
			new_node->set_value(value);
			if(rare==NULL)
			front=rare=new_node;
			else
			{
				rare->set_next(new_node);
				rare=new_node;
			}
		}
		int get_front()
		{
			if(is_empty()!=true)
			return front->get_value();
		}
		int dequeue()
		{
			if(is_empty()!=true)
			{
				Node<int>*n=front;
				int m=front->get_value();
				front=front->get_next();
				delete n;
				return m;
			}
		}
		int get()
		{
			cout<<front->get_next()->get_value()<<endl;
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
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
//	q.get();
	cout<<"front="<<q.get_front()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
	cout<<"dequeue="<<q.dequeue()<<endl;
}
