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
				else if(value[i]==' ')
				continue;
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
				postorder(N->get_right());
				cout<<N->get_value();
			}
		}
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
				if(N->get_left()!=NULL&&N->get_right()!=NULL)
				cout<<"(";
				inorder(N->get_left());
				cout<<N->get_value();
				inorder(N->get_right());
				if(N->get_left()!=NULL&&N->get_right()!=NULL)
				cout<<")";
			}
		}
		Tree_node*get_root()
		{
			return s.top();
		}
};
class Calculate
{
	Stack<char>cs;
	public:
	bool precedence(char ch1,char ch2)
	{
		if(ch1==')'||ch2==')')
		return true;
		if(ch1=='('||ch2=='(')
		return false;
		int pre1,pre2;
		if(ch1=='^')
		pre1=3;
		else if(ch1=='*'||ch1=='/')
		pre1=2;
		else if(ch1=='+'||ch1=='-')
		pre1=1;
		if(ch2=='^')
		pre2=3;
		else if(ch2=='*'||ch2=='/')
		pre2=2;
		else if(ch2=='+'||ch2=='-')
		pre2=1;
		if(pre1>=pre2)
		return true;
		else
		return false;
	}
	string in_to_post(string infix)
	{
		char postfix[1000]="";
		int a=0;
		for(int i=0;i<infix.length();i++)
		{
			if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix
			[i]=='/'||infix[i]=='^'||infix[i]=='('||infix[i]==')')
			{
				if(infix[i]!='('&&infix[i]!=')')
				postfix[a++]=' ';
				char c=infix[i];
				if(cs.is_empty()==true)
				{
					cs.push(c);
				}
				else if(precedence(cs.top(),c)==false)
				{
					cs.push(c);
				}
				else if(precedence(cs.top(),c)==true)
				{
					if(c==')')
					{
						postfix[a++]=' ';
						while(cs.top()!='(')
						postfix[a++]=cs.pop();
						cs.pop();
					}
					else
					{
						postfix[a++]=cs.pop();
						cs.push(c);
					}
				}
			}
			else
			{
				postfix[a++]=infix[i];
			}
		}
		if(cs.is_empty()!=true)
		postfix[a++]=' ';
		while(cs.is_empty()!=true)
		{
			postfix[a]=cs.pop();
			a++;
		}
		return postfix;
	}
};
main()
{
	Calculate c;
	Tree t;
	string infix="ab+cde+**";
	cout<<"Enter the infix express"<<endl;
	cin>>infix;
	t.insert(c.in_to_post(infix));
	cout<<"postorder"<<endl;
	t.postorder(t.get_root());
	cout<<endl;
	cout<<"inorder"<<endl;
	t.inorder(t.get_root());
	cout<<endl;
}
