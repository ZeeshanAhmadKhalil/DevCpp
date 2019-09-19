#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
template<class T>
class Stack
{
	T*y;
	int size,current;
	public:
		Stack()
		{
			size=30;
			y=new T[size];
			current=-1;
		}
		void push(T value)
		{
			if(is_full()!=true)
			{
			y[++current]=value;
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
	char*postfix;
	int a;
	Stack<char>s;
	Stack<float>fs;
	public:
		Convert()
		{
			a=0;
			postfix=new char[a];
		}
		bool presidence(char ch1,char ch2)
		{
			if(ch1=='('||ch2=='(')
			return true;
			int pre1,pre2;
			if(ch1=='^')
			pre1=3;
			if(ch1=='/'||ch1=='*')
			pre1=2;
			if(ch1=='+'||ch1=='-')
			pre1=1;
			if(ch2=='^')
			pre2=3;
			if(ch2=='/'||ch2=='*')
			pre2=2;
			if(ch2=='+'||ch2=='-')
			pre2=1;
			if(pre1>pre2)
			return false;
			else
			return true;
		}
		string in_to_post(string infix)
		{
			for(int i=0;i<infix.length();i++)
			{
				if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^'||infix[i]=='('||infix[i]==')')
				{
					if(s.is_empty()==true)
					{
						s.push(infix[i]);
					}
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
							if(presidence(s.top(),infix[i])==true)
							s.push(infix[i]);
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
					postfix[a++]=infix[i];
				}
			}
			while(s.is_empty()!=true)
			{
				postfix[a++]=s.pop();
			}
			cout<<"postfix="<<postfix<<endl;
			postfix[a]='.';
			return postfix;
		}
		float evaluate(string post)
		{
			for(int i=0;post[i]!='.';i++)
			{
				if(post[i]=='+'||post[i]=='-'||post[i]=='/'||post[i]=='*'||post[i]=='^')
				{
//					cout<<"here1="<<post[i]<<endl;
					float a,num1,num2;
					num1=fs.pop();
					num2=fs.pop();
					if(post[i]=='+')
					a=num2+num1;
					else if(post[i]=='-')
					a=num2-num1;
					else if(post[i]=='/')
					a=num2/num1;
					else if(post[i]=='*')
					a=num2*num1;
					else if(post[i]=='^')
					a=pow(num2,num1);
					fs.push(a);
				}
				else
				{
					char s[1];
					s[0]=post[i];
					fs.push(atoi(s));
//					cout<<"here="<<fs.top()<<endl;
				}
			}
			return fs.top();
		}	
};
main()
{
	Convert c;
	string infix,postfix;
	cout<<"Enter infix expression"<<endl;
	cin>>infix;
//	cout<<"postfix="<<c.in_to_post(infix)<<endl;
	cout<<c.evaluate(c.in_to_post(infix));
}
