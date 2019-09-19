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
	int size;
	Node*head,*current;
	public:
		List()
		{
			head=new Node();
			current=head;
			size=0;
		}
		add(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size==0)
			{
				new_node->set_next(NULL);
				new_node->set_previous(head);
				head->set_next(new_node);
				current=new_node;
			}
			else
			{
				new_node->set_next(current->get_next());
				new_node->set_previous(current);
				if(current->get_next()!=NULL)
				current->get_next()->set_previous(new_node);
				current->set_next(new_node);
				current=new_node;
			}
			size++;
		}
		get()
		{
			cout<<"Current="<<current->get_value()<<endl;
			cout<<"size="<<size<<endl;
		}
		start()
		{
			if(size!=0)
			{
				current=head;
			}
		}
		next()
		{
			if(size!=0&&current->get_next()!=NULL)
			{
				current=current->get_next();
			}
		}
		remove()
		{
			if(current!=head)
			{
				Node*c=current;
				if(current->get_next()!=NULL)
				{
					current->get_next()->set_previous(current->get_previous());
					current->get_previous()->set_next(current->get_next());
					current=current->get_next();
				}
				else
				{
					current=current->get_previous();
					current->set_next(NULL);
				}
				delete c;
				size--;
			}
		}
		bool find(int value)
		{
			Node*c=current;
			start();
			while(current->get_next()!=NULL)
			{
				next();
				if(current->get_value()==value)
				return true;
			}
			return false;
		}
};
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.start();
	l.next();
	l.next();
//	l.next();
//	l.next();
//	cout<<l.find(1)<<endl;
//	cout<<l.find(3)<<endl;
//	cout<<l.find(0)<<endl;
	l.remove();
	l.get();
}
