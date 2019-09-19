#include"Node.cpp"
class List
{
	int size;
	Node*head,*current;
	public:
	List()
	{
		head=NULL;
		current=NULL;
		size=0;
	}
	add(int element)
	{
		Node*new_node=new Node();
		new_node->set_element(element);
		if(size==0)
		{
			new_node->set_next(NULL);
			new_node->set_previous(NULL);
			head=current=new_node;
		}
		else
		{
			new_node->set_previous(current);
			current->set_next(new_node);
			new_node->set_next(head);
			head->set_previous(new_node);
			current=new_node;
		}
		size++;
	}
	remove()
	{
		if(current!=NULL)
		{
			current->get_next()->set_previous(current->get_previous());
			current->get_previous()->set_next(NULL);
			current->get_previous()->set_next(current->get_next());
			current=current->get_next();
			size--;
		}
		else
		cout<<"No node";
	}
	start()
	{
		current=head;
	}
	next()
	{
		current=current->get_next();
	}
	back()
	{
		current=current->get_previous();
	}
	get()
	{
		cout<<current->get_element()<<endl;
	}
	create()
	{
		int element,no;
		cout<<"How much elements you want to insert"<<endl;
		cin>>no;
		cout<<"Enter the elements"<<endl;
		for(int i=1;i<=no;i++)
		{
			cout<<"Node "<<i<<":";
			cin>>element;
			add(element);
		}
	}
	show_all()
	{
		if(current!=NULL)
		{
		cout<<"The List is"<<endl;
		Node*n;
		n=current;
		start();
		for(int i=1;i<=size;i++)
		{
			cout<<"Node "<<i<<":";
			get();
			current=current->get_next();
		}
		current=n;
		cout<<"Current Node Value="<<current->get_element()<<endl;
		cout<<"Size="<<size<<endl;
		}
	}
	find(int value)
	{
		if(current!=NULL)
		{
		int a=0;
		Node*n;
		n=current;
		start();
		for(int i=1;i<=size;i++)
		{
			if(current->get_element()==value)
			{
				cout<<"Founded at"<<endl;
				cout<<"Node "<<i<<":";
				get();
				a++;
				system("pause");
			}
			current=current->get_next();
		}
		if(a==0)
		{
			cout<<"Not found"<<endl;
			system("pause");
		}
		current=n;
		}
	}
	
};
