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
			head->set_previous(head);
			head->set_next(head);
			current=head;
			size=0;
		}
		add(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size==0)
			{
				head->set_previous(new_node);
				head->set_next(new_node);
				new_node->set_previous(head);
				new_node->set_next(head);
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
		remove()
		{
			if(current!=head)
			{
				Node*c=current;
				current->get_next()->set_previous(current->get_previous());
				current->get_previous()->set_next(current->get_next());
				current=current->get_next();
				delete c;
				size--;
			}
		}
		start()
		{
			if(size!=0)
			current=head;
		}
		next()
		{
			if(current->get_next()!=NULL)
			{
				current=current->get_next();
			}
		}
		back()
		{
			if(current->get_previous()!=NULL)
			current=current->get_previous();
		}
		get()
		{
			if(current->get_previous()!=NULL)
			cout<<"previous="<<current->get_previous()->get_value()<<endl;
			cout<<"current="<<current->get_value()<<endl;
			if(current->get_next()!=NULL)			
			cout<<"next="<<current->get_next()->get_value()<<endl;
			cout<<"Size="<<size<<endl;
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
			return false;
		}
};
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(5);
//	l.start();
//	l.back();
//	l.remove();
//	l.next();
//	l.next();
//	l.next();
	cout<<l.find(1)<<endl;
	cout<<l.find(5)<<endl;
//	l.remove();
//	l.add(100);
//	l.next();
	l.get();
}
