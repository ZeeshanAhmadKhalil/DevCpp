//#include"windows.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class Node
{
	float value;
	Node*next;
	public:
		void set_value(float value)
		{
			this->value=value;
		}
		float get_value()
		{
			return value;
		}
		void set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
		}
};
template<class T>
class Stack
{
	Node*head;
	int size;
	public:
	Stack();
	void push(T value);
	T pop();
	T top();
	bool is_empty();
};
template<class T>
Stack<T>::Stack()
{
	size=0;
	head=NULL;
}
template<class T>
void Stack<T>:: push(T value)
{
	Node*new_node=new Node();
	new_node->set_value(value);
	new_node->set_next(head);
	head=new_node;
	size++;
}
template<class T>
T Stack<T>::pop()
{
	if(is_empty()==false)
	{
		T n=head->get_value();
		Node*m=head;
		head=head->get_next();
		delete m;
		return n;
	}
	else
	return -1;
}
template<class T>
T Stack<T>::top()
{
	if(is_empty()==false)
	return head->get_value();
	else 
	return -1;
}
template<class T>
bool Stack<T>::is_empty()
{
	if(head==NULL)
	return true;
	return false;
}
class Calculate
{
	Stack<float> s;
	Stack<char> cs;
	double value,op1,op2;
	char op,ch[10];
	float inte;
	public:
	float execute_postfix(string postfix)
	{
		for(int i=0;i<postfix.size();)
		{
			if(postfix[i]=='+'||postfix[i]=='-'||
			postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='^')
			{
				op=postfix[i];
				op2=s.pop();
				op1=s.pop();
				if(op=='+')
				value=op1+op2;
				else if(op=='-')
				value=op1-op2;
				else if(op=='*')
				value=op1*op2;
				else if(op=='/')
				value=op1/op2;
				else if(op=='^')
				value=pow(op1,op2);
				s.push(value);
				i++;
				while(postfix[i]==' ')
				i++;
			}
			else
			{
				int j=0;
				while(postfix[i]!=' ')
				{
					ch[j++]=postfix[i++];
				}
				inte=atoi(ch);
				for(int k=1;k<10;k++)
				ch[k]=' ';
				s.push(inte);
				while(postfix[i]==' ')
				i++;
			}
		}
		return s.pop(); 
	}
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
			if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||
			infix[i]=='/'||infix[i]=='^'||infix[i]=='('||infix[i]==')')
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
int main()
{
	Calculate c;
	string infix;
	while(0==0)
	{
		cout<<"INFIX=";
		cin>>infix;
		cout<<"POSTFIX="<<c.in_to_post(infix)<<endl;
		cout<<"RESULT="<<c.execute_postfix(c.in_to_post(infix))<<endl;
		system("pause");
		system("cls");
	}
}
