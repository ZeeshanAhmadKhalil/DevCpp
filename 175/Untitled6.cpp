#include<iostream>
#include<conio.h>
using namespace std;
float calculator(float a,float b,char c)
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
	}
}
main()
{
	int a,b;
	char c;
	cout<<"Enter a number,an operator & a number"<<endl;
	cin>>a>>c>>b;
	cout<<"= "<<calculator(a,b,c)<<endl;
}
