#include<iostream>
using namespace std;
class Node
{
	Node*next;
	int value;
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
		Node *get_next()
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
		void insert(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size!=0)
			{
				new_node->set_next(current->get_next());
				current->set_next(new_node);
				last_current=current;
				current=new_node;
			}
			else
			{
				head->set_next(new_node);
				last_current=head;
				current=new_node;
				current->set_next(NULL);
			}
			size++;
		}
		void remove()
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
					delete current;
					current=last_current;
					current->set_next(NULL);
					last_current=head;
					while(last_current->get_next()!=current&&last_current->get_next()!=NULL)
					last_current=last_current->get_next();
				}
				size--;
			}
		}
		void next()
		{
			if(current->get_next()!=NULL)
			{
				last_current=current;
				current=current->get_next();
			}
		}
		void back()
		{
			if(current!=head)
			{
				current=last_current;
				last_current=head;
				while(last_current->get_next()!=current&&last_current!=current)
				last_current=last_current->get_next();
			}
		}
		void start()
		{
			last_current=head;
			current=last_current->get_next();
		}
		void get()
		{
			if(current!=NULL)
			cout<<"last Current="<<last_current->get_value()<<endl;
			if(last_current!=NULL)
			cout<<"Current="<<current->get_value()<<endl;
			cout<<"Size="<<size<<endl;
		}
};
main()
{
	List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
//	l.insert(4);
	l.start();
//	l.back();
//	l.insert(10);
	l.next();
	l.remove();
//	l.remove();
//	l.remove();
	l.next();
	l.remove();
	l.remove();
//	l.back();
	l.get();
}
