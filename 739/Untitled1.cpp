#include<iostream>
using namespace std;
template<class T>
class Tree_node
{
	T value;
	Tree_node*left;
	Tree_node*right;
	public:
		Tree_node()
		{
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
		push(T value)
		{
			y[++current]=value;
		}
		T pop()
		{
			if(is_empty()!=true)
			return y[current--];
		}
		T top()
		{
			if(is_empty()!=true)
			return y[current];
		}
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
};
class Tree
{
	Tree_node<int>*p,*q;
	Stack<Tree_node<int>*>s;
	public:
		insert(Tree_node<int>*root,int value)
		{
//			cout<<"here"<<endl;
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
					p=p->get_left();
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
					p=p->get_left();
				}
				p=s.pop();
				p=p->get_right(); 
			}
		}
		postorder(Tree_node<int>*root)
		{
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				int v;
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				p=s.top();
				if(p->get_right()==NULL||p->get_right()->get_value()==v)
				{
					v=s.pop()->get_value();
					cout<<v<<" ";
					p=NULL;
				}
				else
				p=p->get_right();
			}
		}
		Tree_node<int>*remove(Tree_node<int>*root,int value)
		{
			Tree_node<int>*t;
			int cmp=value-root->get_value();
			if(cmp>0)
			{
				t=remove(root->get_right(),value);
				root->set_right(t);
			}
			else if(cmp<0)
			{
				t=remove(root->get_left(),value);
				root->set_left(t);
			}
			else if(root->get_left()!=NULL&&root->get_right()!=NULL)
			{
				root->set_value(min(root->get_right()));
				t=remove(root->get_right(),min(root->get_right()));
				root->set_right(t);
			}
			else
			{
				Tree_node<int>*node_to_delete=root;
				if(root->get_left()==NULL)
				root=root->get_right();
				else if(root->get_right()==NULL)
				root=root->get_left();
				else
				root=NULL;
				delete node_to_delete;
			}
			return root;
		}
		int min(Tree_node<int>*root)
		{
			while(root->get_left()!=NULL)
			root=root->get_left();
			return root->get_value();
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
	Tree_node<int>*root=new Tree_node<int>();
	Tree t;
	int x[]={10,5,4,8};
//	cout<<"here m"<<endl;
	root->set_value(x[0]);
	for(int i=1;i<4;i++)
	t.insert(root,x[i]);
//	t.remove(root,13);
//	t.remove(root,15);
//	t.remove(root,10);
//	t.remove(root,5);
	cout<<"inorder"<<endl;
	t.inorder(root);
	cout<<endl;
	cout<<"preorder"<<endl;
	t.preorder(root);
	cout<<endl;
	cout<<"postorder"<<endl;
	t.postorder(root);
	cout<<endl;
//	t.get(root);
}
