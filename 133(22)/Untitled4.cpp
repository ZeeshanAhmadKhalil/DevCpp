#include<iostream>
#include<conio.h>
using namespace std;
main()
{
float a,b;
char op;
for(int a=1;a>0;a++)
{
cout<<"Enter a number, an oprator & then a number"<<endl;
cin>>a>>op>>b;
switch(op)
{
	case '+':
		cout<<a+b<<endl;
		break;
	case '-':
		cout<<a-b<<endl;
		break;
	case '*':
		cout<<a*b<<endl;
		break;
	case '%':
		cout<<(int)a%(int)b<<endl;
		break;
	case '/':
		{
			if(b==0)
			cout<<"Maths error"<<endl;
			else
			cout<<a/b<<endl;
		}
	
	
	}
		}	
} 
