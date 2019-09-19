#include<iostream>
using namespace std;
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
			if(root!=NULL)
			{
				inorder(root->get_left());
				cout<<root->get_value()<<" ";
				inorder(root->get_right());
			}
		}
		preorder(Tree_node<int>*root)
		{
			if(root!=NULL)
			{
				cout<<root->get_value()<<" ";
				preorder(root->get_left());
				preorder(root->get_right());
			}
		}
		postorder(Tree_node<int>*root)
		{
			if(root!=NULL)
			{
				postorder(root->get_left());
				postorder(root->get_right());
				cout<<root->get_value()<<" ";
			}
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
	
}
