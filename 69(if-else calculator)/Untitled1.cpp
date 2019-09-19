#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c=1;
	char op;
	while(c<2)
	{
	cin>>a>>op>>b;
	if (op=='+')
	cout<<"="<<a+b<<endl<<endl;
	else if(op=='-')
	cout<<"="<<a-b<<endl<<endl;
	else if(op=='/')
	{
		if (b==0)
		cout<<"MATHS ERROR"<<endl<<endl;
		else
		cout<<"="<<a/b<<endl<<endl;
	}
	else if (op=='*')
	cout<<"="<<a*b<<endl<<endl;
	else
	cout<<"you entered wrong operator"<<endl<<endl;
}
}
