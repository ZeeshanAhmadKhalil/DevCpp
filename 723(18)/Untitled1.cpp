#include<iostream>
using namespace std;
template<class T>
class Stack
{
	T y[50];
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
		push(T value);
		T pop();
		T top();
};
template<class T>
Stack<T>::push(T value)
{
	y[++current]=value;
}
template<class T>
T Stack<T>::pop()
{
	if(is_empty()!=true)
	return y[current--];
}
template<class T>
T Stack<T>::top()
{
	if(is_empty()!=true)
	return y[current];
}
class Tree_node
{
	int info;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			info=0;
			left=right=NULL;
		}
		set_info(int info)
		{
			this->info=info;
		}
		int get_info()
		{
			return info;
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
	Tree_node*p,*q;
	public:
		Tree()
		{
			p=q=NULL;
		}
		insert(Tree_node*root,int info)
		{
			Tree_node*new_node=new Tree_node();
			new_node->set_info(info);
			p=q=root;
			while(q!=NULL&&p->get_info()!=info)
			{
				p=q;
				if(info<p->get_info())
				q=p->get_left();
				else if(info>p->get_info())
				q=p->get_right();
			}
			if(info<p->get_info())
			p->set_left(new_node);
			else if(info>p->get_info())
			p->set_right(new_node);
			else
			delete new_node;
		}
		get(Tree_node*root)
		{
			cout<<root->get_info()<<endl;
			cout<<root->get_left()->get_info()<<endl;
			cout<<root->get_right()->get_info()<<endl;
		}
		inorder(Tree_node*root)
		{
			Stack<Tree_node*>s;
			p=root;
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
					cout<<p->get_info()<<" ";
					p=p->get_right();
				}
			}
		}
		preorder(Tree_node*root)
		{
			Stack<Tree_node*>s;
			p=root;
			while(s.is_empty()!=true||p!=NULL)
			{
				while(p!=NULL)
				{
					cout<<p->get_info()<<" ";
					s.push(p);
					p=p->get_left();
				}
				if(s.is_empty()!=true)
				{
					p=s.pop();
					p=p->get_right();
				}
			}
		}
		postorder(Tree_node*root)
		{
			int v;
			Stack<Tree_node*>s;
			p=root;
			while(s.is_empty()!=true||p!=NULL)
			{
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				p=s.top();
				if(p->get_right()==NULL)
				{
					p=s.pop();
					v=p->get_info();
					cout<<v<<" ";
					p=NULL;
				}
				else if(p->get_right()->get_info()==v)
				{
					p=s.pop();
					v=p->get_info();
					cout<<v<<" ";
					p=NULL;
				}
				else
				p=p->get_right();
			}
		}
		levelorder(Tree_node*root)
		{
			Queue q;
			p=root;
			q.enqueue(p);
			while(q.is_empty()!=true)
			{
				p=q.dequeue();
				cout<<p->get_info()<<" ";
				if(p->get_left()!=NULL)
				q.enqueue(p->get_left());
				if(p->get_right()!=NULL)
				q.enqueue(p->get_right());
			}
		}
};
main()
{
	Tree_node*root=new Tree_node();
	Tree t;
	int x[]={12,8,14,5,1,13,15};
	root->set_info(x[0]);
	for(int i=1;i<7;i++)
	t.insert(root,x[i]);
//	t.get(root);
	cout<<"inorder";
	t.inorder(root);
	cout<<endl;
	cout<<"preorder";
	t.preorder(root);
	cout<<endl;
	cout<<"postorder";
	t.postorder(root);
	cout<<endl;
	cout<<"levelorder";
	t.levelorder(root);
}
