#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class Stack
{
	T*array,current;
	public:
		Stack()
		{
			current=0;
			array=new T[10];
		}
		push(T value);
		T pop();
		T top();
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(current==10)
			return true;
			return false;
		}
};
template<class T>
Stack<T>::push(T value)
{
	if(is_full()==false)
	array[++current]=value;
}
template<class T>
T Stack<T>::pop()
{
	if(is_empty()==false)
	return array[current--];
}
template<class T>
T Stack<T>::top()
{
	if(is_empty()==false)
	return array[current];
}
class Calculate
{
	Stack<int>s1;
	Stack<char>s;
	public:
		pre(char ch1,char ch2)
		{
			int pre1,pre2;
			if(ch1=='('||ch2=='(')
			return true;
			else if(ch1==')'||ch2==')')
			return false;
			if(ch1=='*'||ch1=='/')
			pre1=2;
			else if(ch1=='-'||ch1=='+')
			pre1=1;
			if(ch2=='*'||ch2=='/')
			pre2=2;
			else if(ch2=='-'||ch2=='+')
			pre2=1;
			if(pre1<pre2)
			return true;
			return false;
		}
		string in_to_post(string infix)
		{
			int a=0;
			char*postfix=new char[a];
			for(int i=0;i<infix.length();i++)
			{
				if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='('||infix[i]==')')
				{
					if(s.is_empty()==true)
					s.push(infix[i]);
					else
					{
						if(pre(s.top(),infix[i])==true)
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
			postfix[a++]=s.pop();
			return postfix;
		}	
};
main()
{
	Calculate c;
	string i,p;
	cout<<"Infix=";
	cin>>i;
	p=c.in_to_post(i);
	cout<<"Postfix="<<p<<endl;
}
