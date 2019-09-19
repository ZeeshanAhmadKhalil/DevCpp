#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b;
	char c;
	cout<<"Enter a numbers & then an operator & then a number"<<endl<<endl;
	cout<<"                ";cin>>a>>c>>b;cout<<"                       =";
	switch(c)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '/':
			cout<<a/b;
			break;
		case '*':
			cout<<a*b;
			break;
		default:
			cout<<"you entered WRONG operator";
	}
}
