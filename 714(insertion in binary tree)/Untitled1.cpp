#include<iostream>
#include<windows.h>
using namespace std;
class Tree_node
{
	int value,count;
	Tree_node*left;
	Tree_node*right;
	public:
		Tree_node()
		{
			count=1;
			value=0;
			left=right=NULL;
		}
		Tree_node(int value)
		{
			this->value=value;
			left=right=NULL;
		}
		int get_info()
		{
			return value;
		}
		set_info(int value)
		{
			this->value=value;
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
		Count()
		{
			count++;
		}
		int get_count()
		{
			return count; 
		}
};
class Tree
{
	int size;
	Tree_node*p,*q;
	public:
		Tree_node*root;
		Tree()
		{
			size=0;
			root=NULL;
			p=q=NULL;
		}
		insert(int value)
		{
			Tree_node*new_node=new Tree_node();
			new_node->set_info(value);
			if(size==0)
			{
				root=new_node;
				size++;
			}
			else
			{
				p=q=root;
				if(value==root->get_info())
				root->Count();
				while(value!=p->get_info()&&q!=NULL)
				{
					p=q;
					if(value<p->get_info())
					q=p->get_left();
					else if(value>p->get_info())
					q=p->get_right();
					else
					{
						p->Count();
						break;
					}
				}
				if(value<p->get_info())
				{
					p->set_left(new_node);
					size++;
				}
				else if(value>p->get_info())
				{
					p->set_right(new_node);
					size++;
				}
				else
				delete new_node;
			}
		}
		
		find(int x)
		{
			int found=0;
			p=q=root;
			if(x==root->get_info())
			found=1;
			while(q!=NULL&&x!=p->get_info())
			{
				p=q;
				if(x<p->get_info())
				q=p->get_left();
				else if(x>p->get_info())
				q=p->get_right();
				else
				{
					found=1;
				}
			}
			if(found==1)
			{
			cout<<"Found & it was "<<p->get_count();
			cout<<" times entered"<<endl;
			}
			else
			cout<<"Not found"<<endl;
			cout<<endl<<endl;
			system("pause");
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
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
				inorder(N->get_left());
				cout<<N->get_info()<<" ";
				inorder(N->get_right());
			}
		}
};
main()
{
	Tree t;
	int no_of_values,value,choice;
	label:
	system("cls");
	cout<<"How many values you want to insert in the tree:"<<endl;
	cin>>no_of_values;
	cout<<"Enter the values to insert"<<endl;
	for(int i=1;i<=no_of_values;i++)
	{
		cin>>value;
		t.insert(value);
	}
	label1:
	system("cls");
	cout<<"Choose the following"<<endl;
	cout<<"1 for inserting more values"<<endl;
	cout<<"2 for finding a value"<<endl;
	cout<<"3 for printing values of trees in different orders"<<endl;
	cout<<"4 for exiting program"<<endl;
	cin>>choice;
	if(choice==1)
	goto label;
	else if(choice==2)
	{
		cout<<"Enter a value to find"<<endl;
		cin>>value;
		t.find(value);
	}
	else if(choice==3)
	{
		cout<<"Preorder::";
		t.preorder(t.root);
		cout<<endl<<endl;
		cout<<"postorder::";
		t.postorder(t.root);
		cout<<endl<<endl;
		cout<<"Inorder::";
		t.inorder(t.root);
		cout<<endl<<endl;
		system("pause");
	}	
	else if(choice==4)
	{
		goto end;
	}
	else
	{
		cout<<"wrong choice"<<endl<<endl<<endl;
		system("pause");
		goto label1;
	}
	goto label1;
	end:
	cout<<"Thanks you"<<endl;
}
