#include<iostream>
using namespace std;
class Calculator
{
	float a,b;
	char op;
	public:
		set()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"op=";
			cin>>op;
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
				cout<<"Math error"<<endl;
				else
				cout<<a/b;
			}
		}
};
main()
{
	Calculator c;
	c.set();
	c.calculate();
	char c1;
	cout<<"continue(y/n)";
	cin>>c1;
	while(c1=='y')
	{
		c.set();
		c.calculate();
		cout<<"continue(y/n)";
		cin>>c1;
	}
}
