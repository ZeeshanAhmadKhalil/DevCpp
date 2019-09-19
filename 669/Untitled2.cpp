#include"Untitled1.cpp"
class List
{
	int size;
	Node*current,*last_current,*new_node,*head;
	public:
	List()
	{
		current=last_current=head=NULL;
		size=0;
	}
	add(int value)
	{
		new_node=new Node();
		new_node->set_value(value);
		if(size==0)
		{
			new_node->set_next(new_node);
			head=last_current=current=new_node;
		}
		else
		{
			if(current->get_next()==NULL)
			new_node->set_next(head);
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
			delete current;
			current=last_current->get_next();
		}
		size--;
	}
	start()
	{
		if(size!=0)
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
		cout<<current->get_value()<<endl;
	}
};
main()
{
	List l;
	int n=3,m=10;
	for(int i=1;i<=m;i++)
	{
		l.add(i);
	}
	l.start();
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		l.next();
		l.get();
		l.remove();
	}
}
