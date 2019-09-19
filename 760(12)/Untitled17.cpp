#include<iostream>
using namespace std;
class Node
{
	int value;
	Node*next;
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
		void set_next(Node* next)
		{
			this->next=next;
		}
		Node* get_next()
		{
			return next;
		}
};
class Queue
{
	
	public:
		Node*front,*rare;
	Queue()
	{
		front=rare=NULL;
	}
	void enqueue(int value)
	{
		Node*new_node=new Node();
		new_node->set_value(value);
		if(front==NULL)
		{
			front=rare=new_node;
		}
		else
		{
			rare->set_next(new_node);
			new_node->set_next(NULL);
			rare=new_node;
		}
	}
	int get_front()
	{
		if(is_empty()==false)
		return front->get_value();
	}
	int dequeue()
	{
		if(is_empty()==false)
		{
			int f=front->get_value();
			if(front==rare)
			{
				front=rare=NULL;
			}
			else
			{
				front=front->get_next();
			}
			return f;
		}
	}
	bool is_empty()
	{
		if(front==NULL)
		return true;
		return false;
	}
	sort()
	{
		if(!is_empty())
		{
//			cout<<"here we will sort"<<endl;
//			if(front.get_value)
//			cout<<front->get_value()<<endl;
//			cout<<rare->get_value()<<endl;
			Node*temp1;
			
			for(int i=1;i<=50;i++)
			{
				temp1=front;
				while(temp1!=rare)
				{	
					if(temp1->get_value()>temp1->get_next()->get_value())
					{
						int temp=temp1->get_value();
						temp1->set_value(temp1->get_next()->get_value());
						temp1->get_next()->set_value(temp);
					}
					temp1=temp1->get_next();
				}
			}
			
			
		}
	}
};
main()
{
	Queue q;
	cout << "Enter 1 to insert into queue." << endl;
	cout << "Enter 2 to delete from queue." << endl;
	cout << "Enter 3 to show to first element." << endl;
	cout <<"enter 4 to sort the queue"<<endl;
	int val, choice;
//	queue u;
	
	while(true){
		cout << "Please choose an option: ";
		cin >> choice;
		
		switch(choice){
			case 1:
				cout << "Please enter a value to insert: ";
				cin >> val;
				q.enqueue(val);
				cout << val << " is inserted." << endl;
				break;
				
			case 2:
				if(q.is_empty()) cout << "The queue is empty!" << endl;
				else cout << q.dequeue() << " is deleted from queue." << endl;
				break;
				
			case 3:
				if(q.is_empty()) cout << "The queue is empty!" << endl;
				else cout << q.get_front() << " is in in front of queue." << endl;
				break;
			case 4:
				q.sort();
				cout<<"sorting is done"<<endl;
				break;
			default:
				cout << "Please enter a valid option!" << endl;
			}
		}
}
