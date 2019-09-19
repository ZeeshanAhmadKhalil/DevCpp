#include<iostream>
using namespace std;
class Node
{
	char value;
	Node*next;
	public:
		set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
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
class Stack
{
	Node*head;
	int size;
	public:
	Stack()
	{
		size=0;
		head=NULL;
	}
	push(char value)
	{
		Node*new_node=new Node();
		new_node->set_value(value);
		new_node->set_next(head);
		head=new_node;
		size++;
	}
	char pop()
	{
		if(is_empty()==false)
		{
			char n=head->get_value();
			Node*m=head;
			head=head->get_next();
			delete m;
			return n;
		}	
		else
		return -1;
	}
	char top()
	{
		if(is_empty()==false)
		return head->get_value();
		else 
		return -1;
	}
	bool is_empty()
	{
		if(head==NULL)
		return true;
		return false;
	}
};
class Calculate
{
	Stack cs;
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
	char con;
	Calculate c;
	string infix;
	label:
	cout<<"Enter the infix express"<<endl;
	cin>>infix;
	cout<<"The postfix expression is"<<endl;
	cout<<c.in_to_post(infix)<<endl;
	cout<<"Continue(y/n)"<<endl;
	cin>>con;
	if(con=='y')
	{
		system("cls");
		goto label;
	}
}
