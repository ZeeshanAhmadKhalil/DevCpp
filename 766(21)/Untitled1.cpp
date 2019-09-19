#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class Stack
{
	T*y;
	int size,current;
	public:
		Stack()
		{
			size=10;
			y=new T[size];
			current=-1;
		}
		void push(T value)
		{
			if(is_full()!=true)
			{
			y[++current]=value;
//			cout<<"Done"<<endl;	
			}
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
		bool is_full()
		{
			if(current==size-1)
			return true;
			return false;
		}
		bool is_empty()
		{
			if(current==-1)
			return true;
			return false;
		}
};
class Convert
{
	Stack<char>s;
	public:
	bool presidence(char ch1,char ch2)
	{
		int pre1,pre2;
		if(ch1=='('||ch2=='(')
		return true;
		if(ch1=='+'||ch1=='-')
		pre1=1;
		else if(ch1=='/'||ch1=='*')
		pre1=2;
		else if(ch1=='^')
		pre1=3;
		if(ch2=='+'||ch2=='-')
		pre2=1;
		else if(ch2=='/'||ch2=='*')
		pre2=2;
		else if(ch2=='^')
		pre2=3;
		if(pre1>pre2)
		return false;
		return true;
	}
	string in_to_post(string infix)
	{
		int a=0;
		char postfix[100]="";
		for(int i=0;i<infix.size();i++)
		{
//			cout<<"here"<<endl;
			if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^'||infix[i]=='('||infix[i]==')')
			{
//				cout<<"here"<<infix[i]<<endl;
				if(s.is_empty()==true)
				s.push(infix[i]);
				else
				{
					if(infix[i]==')')
					{
						while(s.top()!='(')
						postfix[a++]=s.pop();
						s.pop();
					}
					else
					{
//						cout<<"here"<<endl;
						if(presidence(s.top(),infix[i])==true)
						{
						s.push(infix[i]);
						}
						else
						{
							postfix[a++]=s.pop();
							s.push(infix[i]);
						}
					}
				}
			}
			else
			{
//			cout<<"here"<<infix[i]<<endl;
			postfix[a++]=infix[i];
			}
		}
		while(s.is_empty()!=true)
		{
		postfix[a++]=s.pop();
		}
		return postfix;
	}
};
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
		void set_value(T value)
		{
			this->value=value;
		}
		T get_value()
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
		bool is_leaf()
		{
			if(get_left()==NULL&&get_right()==NULL)
			return true;
			return false;
		} 
};
class Expression_tree
{
	Stack<Tree_node<char>*>s;
	Tree_node<char>*p,*q;
	public:
		Tree_node<char>*create(string postfix)
		{
			for(int i=0;i<postfix.size();i++)
			{
				Tree_node<char>*new_node=new Tree_node<char>();
				new_node->set_value(postfix[i]);
				if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='/'||postfix[i]=='*'||postfix[i]=='^')
				{
					p=s.pop();
					q=s.pop();
					new_node->set_left(q);
					new_node->set_right(p);
					s.push(new_node);
				}
				else
				{
					s.push(new_node);
				}
			}
		}
		Tree_node<char>*get_root()
		{
			return s.top();
		}
		void inorder(Tree_node<char>*root)
		{
			if(root!=NULL)
			{
				if(root->get_left()!=NULL||root->get_right()!=NULL)
				cout<<"(";
				inorder(root->get_left());
				cout<<root->get_value();
				inorder(root->get_right());
				if(root->get_left()!=NULL||root->get_right()!=NULL)
				cout<<")";
			}
		}
//		void preorder(Tree_node<char>*root)
//		{
//			if(root!=NULL)
//			{
//				cout<<root->get_value();
//				preorder(root->get_left());
//				preorder(root->get_right());
//			}
//		}
		void postorder(Tree_node<char>*root)
		{
			if(root!=NULL)
			{
				postorder(root->get_left());
				postorder(root->get_right());
				cout<<root->get_value();
			}
		}
};
main()
{
	Convert c; 
	Expression_tree t;
	string infix;
	cout<<"infix=";
	cin>>infix;
	t.create(c.in_to_post(infix));
	cout<<"Inorder:";
	t.inorder(t.get_root());
	cout<<endl;
//	cout<<"Preorder:";
//	t.preorder(t.get_root());
//	cout<<endl;
	cout<<"Postorder:";
	t.postorder(t.get_root());
	cout<<endl;
}
