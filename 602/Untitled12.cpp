#include<iostream>

using namespace std;
class Calculator
{
	float a,b;
	char op;
	public:
		set()
		{
			cin>>a;
			cin>>op;
			cin>>b;
			cout<<"=";
		}
		calculate()
		{
			if(op=='+')
			cout<<a+b<<endl;
			else if(op=='-')
			cout<<a-b<<endl;
			else if(op=='*')
			cout<<a*b<<endl;
			else if(op=='%')
			cout<<(int)a%(int)b<<endl;
			else if(op=='/')
			{
				if(b==0)
				cout<<"Math Error"<<endl;
				else
				cout<<a/b<<endl;
			}
			else
			cout<<"Wrong operator"<<endl;
		}
};
main()
{
	Calculator c;
	char choice='y';
	do
	{
		c.set();
		c.calculate();
		cout<<"Continue(y/n):";
		cin>>choice;
	}
	while(choice=='y');
}
