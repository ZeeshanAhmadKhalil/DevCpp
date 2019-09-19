#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Stack
{
	char*array,current;
	public:
		Stack()
		{
			array=new char[5];
			current=0;
		}
		push(char value)
		{
			if(is_full()==false)
			array[++current]=value;
		}
		int pop()
		{
			if(is_empty()==false)
			return array[current--];
		}
		char top()
		{
			return array[current];
		}
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(current==5)
			return true;
			return false;
		}
};
class calculate
{
	Stack s;
	public:
	bool pre(char ch1,char ch2)
	{
		int pre1,pre2;
		if(ch1==')'||ch2==')')
		return false;
		if(ch1=='('||ch2=='(')
		return true;
		if(ch1=='*'||ch1=='/')
		pre1=2;
		else if(ch1=='+'||ch1=='-')
		pre1=1;
		if(ch2=='*'||ch2=='/')
		pre2=2;
		else if(ch2=='+'||ch2=='-')
		pre2=1;
		if(pre1>=pre2)
		return false;
		else
		return true;
	}
	string in_to_post(string infix)
	{
//		cout<<"start"<<endl;
		char postfix[10];
		int a=0;
		for(int i=0;i<infix.length();i++)
		{
			if(infix[i]=='+'||infix[i]=='*'||infix[i]=='/'||infix[i]=='-'||infix[i]=='('||infix[i]==')')
			{
				cout<<"infix="<<infix[i]<<endl;
				if(s.is_empty()==true)
				{
					s.push(infix[i]);
					cout<<"top="<<s.top()<<endl;
				}
				else
				{
					if(pre(s.top(),infix[i])==true)
					s.push(infix[i]);
					else
					{
						if(infix[i]==')')
						{
							while(s.top()!='(')
							{
								postfix[a++]=s.pop();
							}
							s.pop();
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
			postfix[a++]=infix[i];
		}
		while(s.is_empty()!=true)
		{
//			cout<<"last loop"<<endl;
//			if(s.top()!='(')		
			postfix[a++]=s.pop();
		}
		return postfix;
	}
};
main()
{
	calculate c;
	string infix;
	cin>>infix;
	cout<<c.in_to_post(infix)<<endl;
	
}

