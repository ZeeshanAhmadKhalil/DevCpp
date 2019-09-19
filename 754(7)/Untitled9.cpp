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
				current->set_next(new_node);
				last_current=current;
				current=new_node;
			}
			else
			{
				last_current=head=current=new_node;
				new_node->set_next(new_node);
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
					last_current=current=head=NULL;
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
		void next()
		{
				last_current=current;
				current=current->get_next();
		}
		void back()
		{
				current=last_current;
				last_current=head;
				while(last_current->get_next()!=current)
				last_current=last_current->get_next();
		}
		void start()
		{
			current=head;
			last_current=head;
			while(last_current->get_next()!=current)
			last_current=last_current->get_next();
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
		int get()
		{
			if(current!=NULL&&current->get_next()!=NULL)
			{
				return current->get_value();
			}
		}
};
main()
{
	List l;
	int n=10,m=3;
	for(int i=1;i<=n;i++)
	l.insert(i);
	l.start();
	for(int i=1;i<n;i++)
	{
		for(int i=1;i<=3;i++)
		l.next();
		cout<<"Eleminated="<<l.get()<<endl;
		l.remove();
	}
	cout<<"King is="<<l.get()<<endl;
//	l.insert(1);
//	l.insert(2);
//	l.insert(3);
//	l.insert(4);
//	l.start();
//	l.back();
//	l.insert(10);
////	l.next();
////	l.next();
////	l.next();
////	l.next();
//	l.remove();
//////	l.back();
//	l.remove();
//	l.remove();
//////////	l.back();
////	l.next();
////	l.next();
////	l.next();
////	l.next();
//	l.remove();
//	l.remove();
	l.get();
//	l.find(1);
}
