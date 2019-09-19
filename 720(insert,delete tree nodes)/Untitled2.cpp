#include<iostream>
using namespace std;
int done=0;
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
		get()
		{
			cout<<root->get_value()<<endl;
			cout<<root->get_left()->get_right()->get_right()->get_value()<<endl;
			cout<<root->get_right()->get_value()<<endl;
		}
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
			inorder(N->get_left());
			cout<<N->get_value()<<" ";
			inorder(N->get_right());
			}
		}
		preorder(Tree_node*N)
		{
			if(N!=NULL)
			{
			cout<<N->get_value()<<" ";
			preorder(N->get_left());
			preorder(N->get_right());
			}
		}
		postorder(Tree_node*N)
		{
			if(N!=NULL)
			{
			postorder(N->get_left());
			postorder(N->get_right());
			cout<<N->get_value()<<" ";
			}
		}
		Tree_node*get_root()
		{
			return root;
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
		Tree_node*remove(Tree_node*p,int value)
		{
			Tree_node*t;
			int cmp=value-p->get_value();
			if(cmp<0)
			{
				t=remove(p->get_left(),value);
				cout<<"left"<<p->get_value()<<endl;
				p->set_left(t);
			}
			else if(cmp>0)
			{
				t=remove(p->get_right(),value);
				cout<<"right"<<p->get_value()<<endl;
				p->set_right(t);
			}
			else if(p->get_left()!=NULL&&p->get_right()!=NULL)
			{
				int min=find_min(p->get_right());
				p->set_value(min);
				t=remove(p->get_right(),min);
				p->set_right(t);
			}
			else
			{
				Tree_node*node_to_delete=p;
				if(p->get_right()==NULL)
				p=p->get_left();
				else if(p->get_left()==NULL)
				p=p->get_right();
				delete node_to_delete;
				
			}
			return p;
		}
		int find_min(Tree_node*q)
		{
			if(q->get_left()==NULL)
			return q->get_value();
			find_min(q->get_left());
		}
	};
main()
{
	Tree t;
	int x[]={8,16,6,7,9,12,15,14,28,19,20},value;
	for(int i=0;i<11;i++)
	t.insert(x[i]);
//	t.get();
	cout<<"Inorder:";
	t.inorder(t.get_root());
	cout<<endl;
	cout<<"preorder:";
	t.preorder(t.get_root());
	cout<<endl;
	cout<<"postorder:";
	t.postorder(t.get_root());
	cout<<endl;
	cout<<"level print:";
	t.level_print();
	cout<<endl;
	cout<<"Enter node to delete:";
	cin>>value;
	t.remove(t.get_root(),value);
	cout<<"level print:";
	t.level_print();
	cout<<endl;
	cout<<"Inorder:";
	t.inorder(t.get_root());
	cout<<endl;
}
