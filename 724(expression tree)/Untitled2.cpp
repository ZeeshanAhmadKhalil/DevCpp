#include<iostream>
#include<string.h>
using namespace std;
class Tree_node
{
	Tree_node*left,*right;
	char value;
	public:
		Tree_node()
		{
			left=right=NULL;
		}
		void set_left(Tree_node*left)
		{
			this->left=left;
		}
		Tree_node*get_left()
		{
			return left;
		}
		void set_right(Tree_node*right)
		{
			this->right=right;
		}
		Tree_node*get_right()
		{
			return right;
		}
		set_value(char value)
		{
			this->value=value;
		}
		char get_value()
		{
			return value;
		}
};
template<class Z>
class Stack
{
	Z y[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		void push(Z value)
		{
			y[++current]=value;
		}
		Z pop()
		{
			if(!is_empty())
			return y[current--];
		}
		Z top()
		{
			if(!is_empty())
			return y[current];
		}
		int is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
};
class Tree
{
	Tree_node*p,*q;
	Stack<Tree_node*>s;
	public:
		void insert(string value)
		{
			for(int i=0;i<value.length();i++)
			{
				Tree_node*new_node=new Tree_node();
				new_node->set_value(value[i]);
				if(value[i]=='+'||value[i]=='-'||value[i]=='/'||value[i]=='*')
				{
					p=s.pop();
					q=s.pop();
					new_node->set_right(p);
					new_node->set_left(q);
					s.push(new_node);
				}
				else
				{
					s.push(new_node);
				}
			}
		}
		postorder(Tree_node*N)
		{
			if(N!=NULL)
			{
				postorder(N->get_left());
				cout<<N->get_value()<<" ";
				postorder(N->get_right());
			}
		}
		Tree_node*get_root()
		{
			return s.top();
		}
};
main()
{
	Tree t;
	string x="ab+cde+**";
	t.insert(x);
	t.get_root();
	cout<<"postorder"<<endl;
	t.postorder(t.get_root());
	cout<<endl;
}
