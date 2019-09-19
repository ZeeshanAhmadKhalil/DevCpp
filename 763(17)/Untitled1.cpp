#include<iostream>
using namespace std;
template<class T>
class Tree_node
{
	int value;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			value=0;
			left=right=NULL;
		}		
		void set_value(int value)
		{
			this->value=value;
		}
		int get_value()
		{
			return value;
		}
		void set_left(Tree_node*left)
		{
			this->left=left;
		}
		Tree_node *get_left()
		{
			return left;
		}
		void set_right(Tree_node*right)
		{
			this->right=right;
		}
		Tree_node *get_right()
		{
			return right;
		}
};
class Tree
{
	Tree_node<int>*p,*q;
	public:
		Tree()
		{
			p=q=NULL;
		}
		void insert(int value,Tree_node<int>*root)
		{
			p=q=root;
			Tree_node<int>*new_node=new Tree_node<int>();
			new_node->set_value(value);
			while(q!=NULL&&p->get_value()!=value)
			{
				p=q;
				if(value<p->get_value())
				{
					q=p->get_left();
				}
				else if(value>p->get_value())
				{
					q=p->get_right();
				}
				else
				delete new_node;
			}
			if(value<p->get_value())
			{
				p->set_left(new_node);
			}
			else if(value>p->get_value())
			{
				p->set_right(new_node);
			}
		}
		void inorder(Tree_node<int>*root)
		{
			if(root!=NULL)
			{
				inorder(root->get_left());
				cout<<root->get_value()<<" ";
				inorder(root->get_right());
			}
		}
		void preorder(Tree_node<int>*root)
		{
			if(root!=NULL)
			{
				cout<<root->get_value()<<" ";
				preorder(root->get_left());
				preorder(root->get_right());
			}
		}
		void postorder(Tree_node<int>*root)
		{
			if(root!=NULL)
			{
				postorder(root->get_left());
				postorder(root->get_right());
				cout<<root->get_value()<<" ";
			}
		}
};
main()
{
	Tree t;
	int x[]={12,34,65,3,78,6,76,33,87,1};
	Tree_node<int>*root=new Tree_node<int>();
	root->set_value(x[0]);
	for(int i=1;i<10;i++)
	t.insert(x[i],root);
	cout<<"Iorder:";
	t.inorder(root);
	cout<<endl;
	cout<<"prerder:";
	t.preorder(root);
	cout<<endl;  
	cout<<"postrder:";
	t.postorder(root);
	cout<<endl;
}
