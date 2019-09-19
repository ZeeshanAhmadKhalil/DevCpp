#include<iostream>
#include<windows.h>
using namespace std;
class Tree_node
{
	int value;
	Tree_node*left,*right;
	public:
	Tree()
	{
		value=0;
		left=right=NULL;
	}
	set_value(int value)
	{
		this->value=value;
	}
	int get_value()
	{
		return value;
	}
	set_left(Tree_node*left)
	{
		this->left=left;
	}
	Tree_node*get_left()
	{
		return left;
	}
	set_right(Tree_node*right)
	{
		this->right=right;
	}
	Tree_node*get_right()
	{
		return right;
	}
};
class Node
{
	Tree_node*value;
	Node*next;
	public:
		set_value(Tree_node*value)
		{
			this->value=value;
		}
		Tree_node*get_value()
		{
			return value;
		}
		set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
		}
};
class Queue
{
	Node*rare,*front;
	int size;
	public:
		Queue()
		{
			size=0;
			rare=front=NULL;
		}
		enqueue(Tree_node*value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			if(size!=0)
			rare->set_next(new_node);
			new_node->set_next(NULL);
			if(size==0)
			front=new_node;
			rare=new_node;
			size++;
		}
		Tree_node*dequeue()
		{
			if(is_empty()==0)
			{
				Tree_node*value=front->get_value();
				Node*f=front;
				front=front->get_next();
				delete f;
				size--;
				return value;
			}
		}
		Tree_node*get_front()
		{
			if(is_empty()==0)
			return front->get_value();
		}
		bool is_empty()
		{
			return size==0;
		}
		get()
		{
			cout<<"size="<<size<<endl;
			cout<<"front="<<front->get_value()<<endl;
			cout<<"rare="<<rare->get_value()<<endl;
		}
};
class Stack
{
	Tree_node*y[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		int is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
		push(Tree_node*value)
		{
			y[++current]=value;
		}
		Tree_node*pop()
		{
			if(is_empty()!=true)
			return y[current--];
		}
		Tree_node*top()
		{
			if(is_empty()!=true)
			return y[current];
		}
};
class Tree
{
	int size;
	Tree_node*root;
	public:
		Tree()
		{
			size=0;
			root=NULL;
		}
		insert(int value)
		{
			Tree_node*new_node=new Tree_node();
			new_node->set_value(value);
			Tree_node*p,*q;
			if(root==NULL)
			root=new_node;
			else
			{
				p=q=root;
				while(q!=NULL&&p->get_value()!=value)
				{
					p=q;
					if(value<p->get_value())
					q=p->get_left();
					else if(value>p->get_value())
					q=p->get_right();
					else
					break;
				}
				if(value<p->get_value())
				p->set_left(new_node);
				else if(value>p->get_value())
				p->set_right(new_node);
				else 
				delete new_node;
			}
		}
		Tree_node*get_root()
		{
			return root;
		}
		inorder()
		{
			Tree_node*p=root;
			Stack s;
			while(s.is_empty()!=true||p!=NULL)
			{
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				if(s.is_empty()!=true)
				{
					p=s.pop();
					cout<<p->get_value()<<" ";
					p=p->get_right();
				}
			}
			cout<<endl;
		}
		preorder()
		{
			Tree_node*p=root;
			Stack s;
			while(s.is_empty()!=true||p!=NULL)
			{
				while(p!=NULL)
				{
					cout<<p->get_value()<<" ";
					s.push(p);
					p=p->get_left();
				}
				if(s.is_empty()!=true)
				{
					p=s.pop();
					p=p->get_right();
				}
			}
			cout<<endl;
		}
		postorder()
		{
			int v;
			Tree_node*p=root;
			Stack s;
			while(s.is_empty()!=true||p!=NULL)
			{
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				if(s.is_empty()!=true)
				{
					p=s.top();
					if(p->get_right()==NULL)
					{
						v=s.pop()->get_value();
						cout<<v<<" ";
						p=p->get_right();
					}
					else
					{
						if(p->get_right()->get_value()==v)
						{
							v=s.pop()->get_value();
							cout<<v<<" ";
							p=NULL;
						}
						else
						p=p->get_right();
					}
				}
			}
			cout<<endl;
		}
		level_print()
		{
			Queue q;
			Tree_node*p=root;
			q.enqueue(p);
			while(q.is_empty()!=true)
			{
				p=q.dequeue();
				if(p->get_left()!=NULL)
				q.enqueue(p->get_left());
				if(p->get_right()!=NULL)
				q.enqueue(p->get_right());
				cout<<p->get_value()<<" ";
			}
		}
};
main()
{
	Tree t;
	t.insert(12);
	t.insert(15);
	t.insert(7);
	t.insert(6);
	t.insert(16);
	t.insert(10);
	t.inorder();
	t.preorder();
	t.postorder();
	t.level_print();
}
