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
	int size;
	public:
		Queue()
		{
			size=0;
			front=rare=NULL;
		}
		bool is_empty()
		{
			if(front==NULL)
			return true;
			return false;
		}
		int dequeue()
		{
			if(is_empty()!=true)
			{
				Node<int>*m=front;
				int n=front->get_value();
				front=front->get_next();
				delete m;
				size--;
				return n;
			}
		}
		int get_front()
		{
			if(is_empty()!=true)
			return front->get_value();
		}
		void enqueue(int value)
		{
			Node<int>* new_node=new Node<int>();
			new_node->set_value(value);
			if(front==NULL)
			rare=front=new_node;
			else
			{
				rare->set_next(new_node);
				rare=new_node;
			}
			size++;
			sort();
		}
		sort()
		{
			int c;
			Node<int>*r=rare;
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
		get()
		{
			cout<<front->get_value()<<endl;
			cout<<front->get_next()->get_value()<<endl;
			cout<<front->get_next()->get_next()->get_value()<<endl;
		}
};
main()
{
	Queue q;
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
}
