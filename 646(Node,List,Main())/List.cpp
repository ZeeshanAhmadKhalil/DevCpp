#include<windows.h>
#include"Node.cpp"
using namespace std;
class List
{
	int size;
	Node*head;
	Node*tail;
	Node*current;
	Node*last_current;
	public:
		List()
		{
			size=0;
			head=NULL;
			tail=NULL;
			current=NULL;
			last_current=NULL;
		}
		create()
		{
			size=0;
			int value;
			int no;
			cout<<endl;
			cout<<"How many values you want to enter"<<endl;
			cin>>no;
			cout<<"Enter The Values"<<endl;
			for(int i=1;i<=no;i++)
			{
				cout<<"Node"<<i<<":";
				cin>>value;
				add(value);
			}
		}
		add(int value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(head==NULL)
			{
				new_node->set_next_node(NULL);
				current=tail=head=new_node;
				last_current=NULL;
			}
			else
			{
				new_node->set_next_node(current->get_next_node());
				current->set_next_node(new_node);
				last_current=current;
				current=new_node;
				if(current->get_next_node()==NULL)
				tail=new_node;
			}
			size++;
		}
		start()
		{
			if(current==head)
			cout<<"Current Node is already at start."<<endl;
			else
			{
				current=head;
				last_current=NULL;
			}
		}
		end()
		{
			if(current==tail)
			cout<<"current Node is already at end."<<endl;
			else
			{
				current=tail;
			}
		}
		next()
		{
			if(current==NULL)
			cout<<"Current Node is NULL"<<endl;
			else if(current==tail)
			cout<<"Current Node is at Tail"<<endl;
			else
			{
				last_current=current;
				current=current->get_next_node();
			}
		}
		remove()
		{
			if(current==NULL)
			cout<<"No Node to remove"<<endl;
			else if(current==head)
			cout<<"Current node is at Head"<<endl;
			else if(current==tail)
			cout<<"Current Node is at Tail"<<endl;
			else
			{
				last_current->set_next_node(current->get_next_node());
				current==NULL;
				current=last_current->get_next_node();
			}
			size--;
		}
		show_current()
		{
			if(current==NULL)
			cout<<"Current Node is NULL"<<endl;
			else
			cout<<"Current Node Value="<<current->get_value()<<endl;
		}
		show_last_current()
		{
			if(last_current==NULL)
			cout<<"Last Current Node is NULL"<<endl;
			else
			cout<<"Last Current Node Value="<<last_current->get_value()<<endl;
		}
		show_head()
		{
			if(head==NULL)
			cout<<"Head Node is NULL"<<endl;
			else
			cout<<"Head Node Value="<<head->get_value()<<endl;
		}
		show_tail()
		{
			if(tail==NULL)
			cout<<"Tail Node is NULL"<<endl;
			else
			cout<<"Tail Node Value="<<tail->get_value()<<endl;
		}
		show_size()
		{
			cout<<"Size="<<size<<endl;
		}
		show()
		{
			Node*c;
			c=current;
			cout<<"The List would become"<<endl;
			if(current!=head)
			start();
			for(int i=1;i<=size;i++)
			{
				cout<<"Node "<<i<<":"<<current->get_value()<<endl;
				if(i==size)
				break;
				next();
			}
			show_size();
			current=c;
			show_current();
			
		}
};
