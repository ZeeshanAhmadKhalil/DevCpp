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
			if(size==0)
			{
				head->set_next(new_node);
				new_node->set_previous(head);
				new_node->set_next(NULL);
				current=new_node;
			}
			else
			{
				new_node->set_next(current->get_next());
				new_node->set_previous(current);
				if(size==1)
				current->set_next(NULL);
				if(current->get_next()!=NULL)
				current->get_next()->set_previous(new_node);
				current->set_next(new_node);
				last_current=current;
				current=new_node;
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
					current->get_next()->set_previous(last_current);
					delete current;
					current=last_current->get_next();
				}
				else
				{
					delete current;
					current=last_current;
					current->set_next(NULL);
					last_current=last_current->get_previous();
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
			if(last_current!=head)
			{
				current=last_current;
				last_current=last_current->get_previous();
			}
		}
		void start()
		{
			last_current=head;
			current=last_current->get_next();
		}
		int find(int value)
		{	
			int found=0;
			Node*c=current;
			Node*lc=last_current;
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
		}
		void get()
		{
			if(last_current!=NULL)
			cout<<"last Current="<<last_current->get_value()<<endl;
			if(current!=NULL)
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
	l.insert(4);
	l.start();
	l.back();
	l.insert(10);
//////	l.next();
//	l.remove();
//	l.back();
//	l.remove();
//////	l.remove();
//////	l.back();
//	l.next();
//	l.next();
//	l.next();
//	l.next();
////	l.remove();
//	l.remove();
	l.get();
	l.find(5);
}
