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
		void set_next(Node*next)
		{
			this->next=next;
		}
		Node* get_next()
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
		size=0;
		head=new Node();
		current=last_current=NULL;
	}
	void insert(int value)
	{
		Node*new_node=new Node();
		new_node->set_value(value);
		if(size==0)
		{
			head->set_next(new_node);
			last_current=head;
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
	void get()
	{
		cout<<"last current="<<last_current->get_value()<<endl;
		cout<<"current="<<current->get_value()<<endl;
		cout<<"size="<<size<<endl;
	}
	void start()
	{
		if(is_empty()!=true)
		{
			current=head->get_next();
			last_current=head;
		}
	}
	void next()
	{
		if(is_empty()!=true&&current->get_next()!=NULL)
		{
			last_current=current;
			current=current->get_next();
		}
	}
	void previous()
	{
		if(is_empty()!=true&&current!=head->get_next())
		{
			current=last_current;
			last_current=head;
			while(last_current->get_next()!=current)
			last_current=last_current->get_next();
		}
	}
	bool is_empty()
	{
		if(size==0)
		return true;
		return false;
	}
	void remove()
	{
		if(is_empty()!=true)
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
				current->set_next(NULL);
				last_current=head;
				while(last_current->get_next()!=current&&last_current!=current)
				last_current=last_current->get_next();
			}
			size--;
		}
	}
};
main()
{
	List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.previous();
	l.start();
	l.insert(5);
	l.remove();
	l.remove();
	l.remove();
	l.remove();
	l.remove();
	l.insert(1);
	l.next();
	l.next();
	l.get();
}
