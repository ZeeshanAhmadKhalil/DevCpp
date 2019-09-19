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
		get()
		{
			current=NULL;
			cout<<"Last current="<<last_current->get_value()<<endl;
			if(current!=NULL)
			cout<<"Current="<<current->get_value()<<endl;
			cout<<"size="<<size<<endl;
		}
		start()
		{
			if(size!=0)
			{
				last_current=current=head;
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
					Node*c=current;
					current=last_current;
					current->set_next(NULL);
					last_current=head;
					while(last_current->get_next()!=current)
					last_current=last_current->get_next();
					delete c;
				}
				size--;
			}
		}
};
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.start();
//	l.next();
	l.remove();
	l.remove();
	l.next();
//	l.next();
//	l.next();
	l.get();
}
