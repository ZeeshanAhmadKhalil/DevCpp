#include<iostream>
#include<conio.h>
using namespace std;
float a,b;
char c;
float calculator()
{
	switch(c)
	{
	case '+':
		return a+b;
		break;
	case '-':
		return a-b;
		break;
	case '*':
	
		return a*b;
		break;
	case '%':
	
		return (int)a%(int)b;
		break;
	case '/':
		if(b==0)
		cout<<"Math error"<<endl;
		else
		return a/b;
		break;
	
	default:
	cout<<"You entered wrong oprator"<<endl;
	}
}
main()
{
	cout<<"Enter a number, an oprator & a number"<<endl;
	cin>>a>>c>>b;
	cout<<calculator();
}
