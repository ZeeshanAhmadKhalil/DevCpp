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
		int get()
		{
			if(current!=NULL)
			return current->get_value();
//			cout<<"last Current="<<last_current->get_value()<<endl;
//			if(last_current!=NULL)
//			cout<<"Size="<<size<<endl;
		}
		void show()
		{
			Node*c=current;
			Node*lc=last_current;
			start();
			for(int i=1;i<=size;i++)
			{
				cout<<get()<<" ";
				next();
			}
			last_current=lc;
			current=c;
		}
		void odd_values()
		{
			Node*c=current;
			Node*lc=last_current;
			start();
			for(int i=1;i<=size;i++)
			{
				if(get()%2==1)
				cout<<get()<<" ";
				next();
			}
			last_current=lc;
			current=c;
		}
		void even_nodes()
		{
			Node*c=current;
			Node*lc=last_current;
			start();
			for(int i=1;i<=size/2;i++)
			{
				next();
				cout<<get()<<" ";
				next();
			}
			last_current=lc;
			current=c;
		}
		int get_size()
		{
			return size;
		}
};
main()
{
	List l1,l2;
	for(int i=1;i<=10;i++)
	l1.insert(i);
	cout<<"list 1"<<endl;
	l1.show();
	cout<<endl;
	l1.start();
	for(int i=1;i<=l1.get_size();i++)
	{
		l2.insert(l1.get());
		l1.next();
	}
	cout<<"List 2"<<endl;
	l2.show();
	cout<<endl;
	cout<<"odd values"<<endl;
	l1.odd_values();
	cout<<endl;
	cout<<"even Nodes"<<endl;
	l2.even_nodes();
	cout<<endl;
}
