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
			head=new Node();
			current=last_current=head;
			size=0;
		}
		add(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size==0)
			{
				new_node->set_next(NULL);
				head->set_next(new_node);
				current=new_node;
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
			if(current!=head)
			{
				if(current->get_next()!=NULL)
				{
					last_current->set_next(current->get_next());
					delete current;
					current=last_current->get_next();
				}
				else
				{
					current=last_current;
					last_current=head;
					while(last_current->get_next()!=current)
					last_current=last_current->get_next();
				}
				size--;
			}
		}
		start()
		{
			if(size!=0)
			current=last_current=head;
		}
		next()
		{
			if(current->get_next()!=NULL)
			{
				last_current=current;
				current=current->get_next();
			}
		}
		int get()
		{
			return current->get_value();
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
	List l1;
	for(int i=1;i<=10;i++)
	l1.add(i);
	l1.start();
	for(int i=1;i<=10;i++)
	{
		l1.next();
		if(l1.get()%2==1)
		cout<<l1.get()<<endl;
	}
}
