#include"Stack.cpp"
bool precedence(char ch1,char ch2)
	{
		int pre1,pre2;
		if(ch1=='^')
		pre1=3;
		else if(ch1='*'||ch1=='/')
		pre1=2;
		else if(ch1=='+'||ch1=='-')
		pre1=3;
		if(ch2=='^')
		pre2=3;
		else if(ch2='*'||ch2=='/')
		pre2=2;
		else if(ch2=='+'||ch2=='-')
		pre2=3;
		if(pre1<=pre2)
		return true;
		return false;
	}
int main(string infix)
	{
		CharStack cs;
		cin>>infix;
		char postfix[infix.length()];
		int a=0;
		for(int i=0;i<infix.length();i++)
		{
			if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^')
			{
				char c=infix[i];
				if(cs.is_empty()==true)
				{
					cout<<"infix"<<i<<infix[i]<<endl;
					cs.push(c);
				}
				else if(precedence(cs.top(),c)==true)
				{
					cout<<"infix"<<i<<infix[i]<<endl;
//					cs.push(infix[i]);
				}
				else if(precedence(cs.top(),c)==false)
				{
					postfix[a]=cs.pop();
					a++;
					cout<<"infix"<<i<<infix[i]<<endl;
//					cs.push(infix[i]);
				}
			}
			else
			{
				postfix[a]=infix[i];
				a++;
			}
		}
		while(cs.is_empty()!=true)
		{
			postfix[a]=cs.top();
			a++;
		}
		cout<<postfix<<endl;
	}
