#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class Stack
{
	T array[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		push(T value)
		{
			array[++current]=value;
		}
		T pop()
		{
			
			if(is_empty()!=true)
			return array[current--];
		}
		T top()
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
};
template<class T>
class Tree_node
{
	T value;
	Tree_node*left;
	Tree_node*right;
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
	Tree_node<char>*p,*q;
	Stack<Tree_node<char>*>s;
	public:
		void insert(string value)
		{
			for(int i=0;i<value.length();i++)
			{
				Tree_node<char>*new_node=new Tree_node<char>();
				new_node->set_value(value[i]);
				if(value[i]=='+'||value[i]=='-'||value[i]=='*'||value[i]=='/')
				{
					p=s.pop();
					q=s.pop();
					new_node->set_left(q);
					new_node->set_right(p);
					s.push(new_node);
				}
				else
				s.push(new_node);
			}
		}
		Tree_node<char>*get_root()
		{
			return s.top();
		}
		void get()
		{
			cout<<s.top()->get_value()<<endl;
			cout<<s.top()->get_left()->get_value()<<endl;
			cout<<s.top()->get_right()->get_value()<<endl;
		}
		void inorder(Tree_node<char>*root)
		{
			if(root!=NULL)
			{
				if(root->get_left()!=NULL&&root->get_right()!=NULL)
				cout<<"(";
				inorder(root->get_left());
				cout<<root->get_value()<<" ";
				inorder(root->get_right());
				if(root->get_left()!=NULL&&root->get_right()!=NULL)
				cout<<")";
			}
		}
};
main()
{
	string value="ab+c*";
	Tree t;
	t.insert(value);
	t.get();
	t.inorder(t.get_root());
}
