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
class List
{
	int size;
	Node*head,*current,*last_current;
	public:
		List()
		{
			head=NULL;
			current=last_current=head;
			size=0;
		}
		add(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size==0)
			{
				new_node->set_next(new_node);
				head=last_current=current=new_node;
			}
			else
			{
				new_node->set_next(current->get_next());
				current->set_next(new_node);
				last_current=current;
				current=new_node;
			}
			size++;
		}
		remove()
		{
			if(size!=0)
			{
				if(size==1)
				{
					delete current;
					current=NULL;
				}
				else
				{
					last_current->set_next(current->get_next());
					delete current;
					current=last_current->get_next();
				}
				size--;
			}
		}
		start()
		{
			if(size!=0)
			{
				current=head;
				last_current=head;
				while(last_current->get_next()!=current)
				last_current=last_current->get_next();
			}
		}
		next()
		{
			if(current->get_next()!=NULL)
			{
				last_current=current;
				current=current->get_next();
			}
		}
		get()
		{
			if(current!=NULL)
			cout<<"current="<<current->get_value()<<endl;
		}
		bool find(int value)
		{
			Node*c=current;
			start();
			for(int i=1;i<=size;i++)
			{
				next();
				if(current->get_value()==value)
				{
					return true;
				}
			}
			current=c;
			last_current=head;
			while(last_current->get_next()!=current)
			last_current=last_current->get_next();
			return false;
		}
};
main()
{
	List l;
	int m=100,n=10;
	for(int i=1;i<=m;i++)
	l.add(i);
	l.start();
	cout<<"Eliminated"<<endl;
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		l.next();
		l.get();
		l.remove();
	}
	cout<<"King"<<endl;
	l.get();
}