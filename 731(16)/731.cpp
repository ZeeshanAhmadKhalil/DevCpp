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
	int size;
	Node<int>*front,*rare;
	public:		
	Queue()
	{
		size=0;
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
			size++;
			sort();
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
				size--;
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
		sort()
		{
			Node<int>*r=rare;
			int c;
			for(int i=1;i<=size;i++)
			{
				Node<int>*f=front;
				while(f!=r)
				{
					if(f->get_value()>f->get_next()->get_value())
					{
						c=f->get_value();
						f->set_value(f->get_next()->get_value());
						f->get_next()->set_value(c);
					}
					f=f->get_next();
				}
			}
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
