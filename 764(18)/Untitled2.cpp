#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class Tree_node
{
	T value,no;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			value="";
			left=right=NULL;
		}		
		void set_value(T value)
		{
			this->value=value;
		}
		T get_value()
		{
			return value;
		}
		void set_no(T no)
		{
			this->no=no;
		}
		T get_no()
		{
			return no;
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
	Tree_node<string>*p,*q;
	public:
		Tree()
		{
			p=q=NULL;
		}
		void insert(string value,string no,Tree_node<string>*root)
		{
			p=q=root;
			Tree_node<string>*new_node=new Tree_node<string>();
			new_node->set_value(value);
			new_node->set_no(no);
			while(q!=NULL&&p->get_value()!=value)
			{
				p=q;
				if(value.compare(p->get_value())<0)
				{
					q=p->get_left();
				}
				else if(value.compare(p->get_value())>0)
				{
					q=p->get_right();
				}
				else
				delete new_node;
			}
			if(value.compare(p->get_value())<0)
			{
				p->set_left(new_node);
			}
			else if(value.compare(p->get_value())>0)
			{
				p->set_right(new_node);
			}
		}
		void inorder(Tree_node<string>*root)
		{
			if(root!=NULL)
			{
				inorder(root->get_left());
				cout<<root->get_value()<<"		"<<root->get_no()<<"		"<<endl;
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
	string names[]={"Zeeshan","Faizain","Ali","Nouman","Mubeen"};
	string nos[]={"03005290620","03005290621","03005290622","03005290623","03005290624"};
	Tree_node<string>*root=new Tree_node<string>();
	root->set_value(names[0]);
	root->set_no(nos[0]);
	for(int i=1;i<5;i++)
	{
		t.insert(names[i],nos[i],root);
	}
	cout<<"Iorder:"<<endl;
	t.inorder(root);
	cout<<endl;
//	int x[]={12,34,65,3,78,6,76,33,87,1};
//	root->set_value(x[0]);
//	for(int i=1;i<10;i++)
//	t.insert(x[i],root);
//	cout<<"Iorder:";
//	t.inorder(root);
//	cout<<endl;
//	cout<<"prerder:";
//	t.preorder(root);
//	cout<<endl;  
//	cout<<"postrder:";
//	t.postorder(root);
//	cout<<endl;
}
