#include<iostream>
using namespace std;
template<class S>
class Stack
{
	S array[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		push(S value)
		{
			if(is_full()!=true)
			array[++current]=value;
		}
		S pop()
		{
			if(is_empty()!=true)
			return array[current--];
		}
		S top()
		{
			if(is_empty()!=true)
			return array[current];
		}
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(current==50)
			return true;
			return false;
		}
};
template<class Q>
class Queue
{
	int front,rare,size,no_of_elements;
	Q array[50];
	public:
		Queue()
		{
			size=50;
			front=rare=-1;
			no_of_elements=0;
		}
		enqueue(Q value)
		{
			if(is_full()!=true)
			{
				if(front==-1)
				front++;
				rare=(rare+1)%size;
				array[rare]=value;
				no_of_elements++;
			}
		}
		Q dequeue()
		{
			if(is_empty()!=true)
			{
				Q value=array[front];
				front=(front+1)%size;
				no_of_elements--;
				return value;
			}
		}
		Q get_front()
		{
			if(is_empty()!=true)
			{
				return array[front];
			}
		}
		bool is_empty()
		{
			if(no_of_elements==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(no_of_elements==50)
			return true;
			return false;
		}
};
template<class T>
class Tree_node
{
	T value;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			value=0;
			left=right=NULL;
		}
		set_value(T value)
		{
			this->value=value;
		}
		T get_value()
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
class Tree
{
	Stack<Tree_node<int>*>s;
	Queue<Tree_node<int>*>qu;
	Tree_node<int>*p,*q;
	public:
		insert(Tree_node<int>*root,int value)
		{
			Tree_node<int>*new_node=new Tree_node<int>();
			new_node->set_value(value);
			p=q=root;
			while(q!=NULL&&p->get_value()!=value)
			{
				p=q;
				if(value<p->get_value())
				q=p->get_left();
				else if(value>p->get_value())
				q=p->get_right();
			}
			if(value<p->get_value())
			p->set_left(new_node);
			else if(value>p->get_value())
			p->set_right(new_node);
			else
			delete new_node;
		}
		inorder(Tree_node<int>*root)
		{
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					s.push(p);
					p= p->get_left();
				}
				p=s.pop();
				cout<<p->get_value()<<" ";
				p=p->get_right();
			}
		}
		preorder(Tree_node<int>*root)
		{
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					cout<<p->get_value()<<" ";
					s.push(p);
					p= p->get_left();
				}
				p=s.pop();
				p=p->get_right();
			}
		}
		postorder(Tree_node<int>*root)
		{
			int value;
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					s.push(p);
					p= p->get_left();
				}
				p=s.top();
				if(p->get_right()==NULL||p->get_right()->get_value()==value)
				{
				s.pop();
				value=p->get_value();
				cout<<value<<" ";
				p=NULL;
				}
				else
				p=p->get_right();
			}
		}
		level_order(Tree_node<int>*root)
		{
			cout<<root->get_value()<<" ";
			if(root->get_left()!=NULL)
			qu.enqueue(root->get_left());
			if(root->get_right()!=NULL)
			qu.enqueue(root->get_right());
			if(qu.is_empty()!=true)
			level_order(qu.dequeue());
		}
		get(Tree_node<int>*root)
		{
			cout<<root->get_value()<<endl;
			cout<<root->get_left()->get_value()<<endl;
			cout<<root->get_right()->get_value()<<endl;
		}
};
main()
{
	Tree t;
	Tree_node<int>*root=new Tree_node<int>();
	int x[]={8,6,9,4,5};
	root->set_value(x[0]);
	for(int i=1;i<5;i++)
	t.insert(root,x[i]);
//	t.get(root);
	cout<<"Inorder:";
	t.inorder(root);
	cout<<endl;
	cout<<"preorder:";
	t.preorder(root);
	cout<<endl;
	cout<<"postorder:";
	t.postorder(root);
	cout<<endl;
	cout<<"Level order:";
	t.level_order(root);
	cout<<endl;
}
