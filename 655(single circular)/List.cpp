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
		head=NULL;
		current=last_current=NULL;
		size=0;
	}
	add(int object)
	{
		Node*new_node=new Node();
		new_node->set_obj(object);
		if(size==0)
		{
			new_node->set_next(new_node);
			last_current=head=current=new_node;
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
		if(size!=0)
		{
			if(current==head)
			head=head->get_next();
			last_current->set_next(current->get_next());
			current=NULL;
			current=last_current->get_next();
			size--;
		}
	}
	start()
	{
		if(current!=NULL)
		{
			current=head;
			while(last_current->get_next()!=current)
			last_current=last_current->get_next();
		}
	}
	next()
	{
		if(size!=0)
		{
			last_current=current;
			current=current->get_next();
		}
	}
	get()
	{
		cout<<current->get_obj();
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
		if(size!=0)
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
		else
		cout<<"EMPTY"<<endl;
	}
	find(int value)
	{
		if(size!=0)
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
	}
	josephus(int no)
	{
		Node*n,*m;
		n=current;
		m=last_current;
		start();
		while(size!=1)
		{
			for(int i=1;i<=no;i++)
			next();
			get();
			cout<<" is eleminated"<<endl;
			remove();
		}
		cout<<endl<<"The Leader is ";
		get();
		cout<<endl;
		system("pause");
		current=n;
		last_current=m;
	}
};
