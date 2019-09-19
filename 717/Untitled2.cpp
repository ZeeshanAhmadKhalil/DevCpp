#include<iostream>
using namespace std;
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
class Tree
{
	Tree_node*root;
	public:
		Tree()
		{
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
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
			inorder(N->get_left());
			cout<<N->get_value()<<" ";
			inorder(N->get_right());
			}
		}
		Tree_node*get_root()
		{
			return root;
		}
};
main()
{
	Tree t;
	t.insert(34);
	t.insert(23);
	t.insert(12);
	t.insert(23);
	t.insert(35);
	t.insert(32);
	t.insert(33);
	t.insert(43);
	t.inorder(t.get_root());
}
