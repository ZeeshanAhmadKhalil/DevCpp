#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next,*previous;
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
		set_previous(Node*previous)
		{
			this->previous=previous;
		}
		Node*get_previous()
		{
			return previous;
		}
};
class List
{
	Node*head,*current;
	int size;
	public:
	List()
	{
		head=NULL;
		current=head;
		size=0;
	}
	sort()
	{
		int c;
		Node*a=current;
		start();
		for(int i=1;i<size;i++)
		{
			for(int i=1;i<size;i++)
			{
				if(current->get_value()>current->get_next()->get_value())
				{
					c=current->get_value();
					current->set_value(current->get_next()->get_value());
					current->get_next()->set_value(c);
				}
				next();
			}
		}
	}
	add(int value)
	{
		Node*new_node=new Node();
		new_node->set_value(value);
		if(size==0)
		{
			new_node->set_next(new_node);
			new_node->set_previous(new_node);
			head=current=new_node;
		}
		else
		{
			new_node->set_next(current->get_next());
			new_node->set_previous(current);
			current->get_next()->set_previous(new_node);
			current->set_next(new_node);
			current=new_node;
		}
		size++;
	}
	remove()
	{
			Node*c=current;
			current->get_next()->set_previous(current->get_previous());
			current->get_previous()->set_next(current->get_next());
			current=current->get_next();
			delete c;
			size--;
	}
	start()
	{
		if(size!=0)
		current=head;
	}
	next()
	{
		if(size!=0&&current->get_next()!=NULL)
		current=current->get_next();
	}
	get()
	{
		cout<<"Current="<<current->get_value()<<endl;
		cout<<"Size="<<size<<endl;
	}
};
main()
{
	List l;
	int m=10,n=3;
	for(int i=1;i<=m;i++)
	{
		l.add(i);
	}
	l.start();
	cout<<"Eliminated"<<endl;
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		l.next();
		l.get();
		l.remove();
	}
	cout<<"King is"<<endl;
	l.get();
}
