#include<iostream>
using namespace std;
class Node
{
	Node*next,*previous;
	int value;
	public:
		Node()
		{
			value=0;
			previous=next=NULL;
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
		Node*get_next()
		{
			return next;
		}
		void set_previous(Node*previous)
		{
			this->previous=previous;
		}
		Node *get_previous()
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
			current=head=NULL;
			size=0;
		}
		void insert(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size!=0)
			{
				new_node->set_next(current->get_next());
				new_node->set_previous(current);
				new_node->get_next()->set_previous(new_node);
				current->set_next(new_node);
				current=new_node;
			}
			else
			{
				head=current=new_node;
				new_node->set_next(new_node);
				new_node->set_previous(new_node);
			}
			size++;
		}
		void remove()
		{
			if(size!=0)
			{
				if(size==1)
				{
					delete current;
					current=head=NULL;
				}
				else
				{
					current->get_next()->set_previous(current->get_previous());
					current->get_previous()->set_next(current->get_next());
					current=current->get_next();
				}
			size--;
			}
		}
		void next()
		{
				current=current->get_next();
		}
		void back()
		{
				current=current->get_previous();
		}
		void start()
		{
			current=head;
		}
		int find(int value)
		{	
			int found=0;
			Node*c=current;
			start();
			for(int i=1;i<=size;i++)
			{
				if(current->get_value()==value)
				found=1;
				next();
			}
			if(found==1)
			cout<<"Found"<<endl;
			else
			cout<<"Not Found"<<endl;
			current=c;
		}
		void get()
		{
			if(current!=NULL)
			{
				cout<<"previous="<<current->get_previous()->get_value()<<endl;
				cout<<"Current="<<current->get_value()<<endl;
				cout<<"Next="<<current->get_next()->get_value()<<endl;
			}
			cout<<"Size="<<size<<endl;
		}
};
main()
{
	List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.start();
	l.back();
	l.insert(10);
//	l.next();
//	l.remove();
//	l.back();
//	l.remove();
//	l.remove();
//////	l.back();
//	l.next();
//	l.next();
//	l.next();
//	l.next();
//	l.remove();
//	l.remove();
	l.get();
	l.find(11);
}
