#include"Node.cpp"
class List
{
	int size;
	Node*current,*head,*new_node;
	public:
	List()
	{
		head=new Node();
		current=head;
		size=0;
	}
	add(int value)
	{
		new_node=new Node();
		new_node->set_value(value);
		if(size==0)
		{
			new_node->set_next(NULL);
			new_node->set_pre(head);
			head->set_next(new_node);
			current=new_node;
		}
		else
		{
			new_node->set_next(current->get_next());
			new_node->set_pre(current);
			if(current->get_next()!=NULL)
			current->get_next()->set_pre(new_node);
			current->set_next(new_node);
			current=new_node;
		}
		size++;
	}
	start()
	{
		if(size!=0)
		{
			current=head;
		}
	}
	next()
	{
		if(size!=0&&current->get_next()!=NULL)
		{
			current=current->get_next();
		}
	}
	back()
	{
		if(size!=0&&current->get_pre()!=NULL)
		{
			current=current->get_pre();
		}
	}
	remove()
	{
		if(size!=0&&current!=head)
		{
			Node*c=current;
			if(current->get_next()!=NULL)
			{
				current->get_next()->set_pre(current->get_pre());
				current->get_pre()->set_next(current->get_next());
				current=current->get_next();
				delete c;
			}
			else
			{
				current=current->get_pre();
				delete c;
			}
		}
		size--;
	}
	get()
	{
		cout<<current->get_value()<<endl;
	}
};
main()
{
	List l;	
	l.add(1);
	l.add(2);
	l.add(3);
	l.start();
	l.next();
	l.next();
	l.remove();
//	l.add(3);
//	l.next();
//	l.next();
//	l.back();
//	l.back();
//	l.back();
//	l.back();
	l.get();
}
