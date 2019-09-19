#include"Node.cpp"
#include<windows.h>
class List
{
	Node*head;
	Node*current;
	Node*last_current;
	int size;
	public:
	List()
	{
		head=new Node();
		current=last_current=head;
		size=0;
	}
	add(int object)
	{
		Node*new_node=new Node();
		new_node->set_obj(object);
		if(size==0)
		{
			head->set_next(new_node);
			new_node->set_next(NULL);
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
	remove()
	{
		if(current==NULL)
		cout<<"Current node is already null"<<endl;
		else if(current==head)
		cout<<"Current node is at head"<<endl;
		else if(current->get_next()==NULL&&size>1)
		{
			current=NULL;
			current=last_current;
			current->set_next(NULL);
			last_current=head;
			while(last_current->get_next()!=current)
			{
				last_current=last_current->get_next();
			}
			
			size--;
		}
		else if(size==1)
		{
			current=last_current=head;
			size=0;
		}
		else
		{
			last_current->set_next(current->get_next());
			current=NULL;
			current=last_current->get_next();
			size--;
		}
	}
	start()
	{
			last_current=head;
			current=last_current->get_next();
	}
	next()
	{
		if(current->get_next()==NULL)
		cout<<"No further node to move next"<<endl;
		else
		{
			last_current=current;
			current=current->get_next();
		}
	}
	get()
	{
		if(size==0)
		cout<<"No node present"<<endl;
		else
		{
			cout<<current->get_obj()<<endl;
		}
	}
	create()
	{
		int no,value;
		size=0;
		cout<<"Enter the no of values you want to enter"<<endl;
		cin>>no;
		cout<<"Enter the values"<<endl;
		for(int i=1;i<=no;i++)
		{
			cout<<"Node "<<i<<":";
			cin>>value;
			add(value);
		}
	}
	show_all()
	{
		int i=1;
		Node*n,*m;
		n=current;
		m=last_current;
		start();
		cout<<"The list is"<<endl;
		for(int i=1;i<=size;i++)
		{
			cout<<"Node "<<i<<":";
			get();
			current=current->get_next();
		}
		current=n;
		last_current=m;
		cout<<"Last Current Node Value="<<last_current->get_obj()<<endl;
		cout<<"Current Node Value="<<current->get_obj()<<endl;
		cout<<"Size="<<size<<endl;
	}
	find(int value)
	{
		int i=0;
		Node*n,*m;
		n=current;
		m=last_current;
		start();
		for(int j=1;j<=size;j++)
		{
			if(current->get_obj()==value)
			{
				cout<<"Node "<<j<<":";
				get();
				i++;
			}
			current=current->get_next();
		}
		if(i==0)
		{
			cout<<"Not found"<<endl;
		}
		system("Pause");
		current=n;
		last_current=m;
	}
};
