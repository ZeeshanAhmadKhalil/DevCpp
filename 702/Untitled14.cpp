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
	Node*last_current,*current,*head;
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
				head=current=last_current=new_node;
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
				if(current==head)
				head=head->get_next();
				last_current->set_next(current->get_next());
				delete current;
				current=last_current->get_next();
				size--;
			}
		}
		int get()
		{
			return current->get_value();
		}
		start()
		{
			if(size!=0)
			{
				current=head;
				while(last_current->get_next()!=current)
				last_current=last_current->get_next();
			}
		}
		next()
		{
			if(size!=0&&current->get_next()!=NULL)
			{
				last_current=current;
				current=current->get_next();
			}
		}
		bool find(int value)
		{
			Node*c=current;
			start();
			for(int i=1;i<=size;i++)
			{
				if(current->get_value()==value)
				return true;
				next();
			}
				current=c;
				return false;
		}
};
main()
{
	List l;
	int m=10,n=3;
	for(int i=1;i<=m;i++)
	l.add(i);
	l.start();
	cout<<"Eliminated"<<endl;
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		l.next();
		cout<<l.get()<<endl;
		l.remove();
	}
	cout<<"KING"<<endl;
	cout<<l.get()<<endl;
	
}
