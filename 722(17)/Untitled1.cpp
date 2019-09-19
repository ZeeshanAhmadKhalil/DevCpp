#include<iostream>
using namespace std;
class Tree_node
{
	int info;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			left=right=NULL;
			info=0;
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
class Tree
{
	Tree_node*p,*q;
	public:
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
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
				inorder(N->get_left());
				cout<<N->get_info()<<" ";
				inorder(N->get_right());
			}
		}
		preorder(Tree_node*N)
		{
			if(N!=NULL)
			{
				cout<<N->get_info()<<" ";
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
				cout<<N->get_info()<<" ";
			}
		}
};
main()
{
	Tree_node*root=new Tree_node();
	Tree t;
	int x[]={13,15,11,10,12,8,9,5};
	root->set_info(x[0]);
	for(int i=1;i<=7;i++)
	t.insert(root,x[i]);
	cout<<"inorder:";
	t.inorder(root);
	cout<<endl;
	cout<<"postorder:";
	t.postorder(root);
	cout<<endl;
	cout<<"preorder:";
	t.preorder(root);
	cout<<endl;
}
