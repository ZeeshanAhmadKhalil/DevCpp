#include<iostream>
#include<conio.h>
using namespace std;
cal(float a,float b,char n)
{
	switch(n)
	{
		case'+':
			cout<<a+b<<endl;
			break;
		case'-':
			cout<<a-b<<endl;
			break;
		case'/':
			if(b==0)
			cout<<"Maths errer"<<endl;
			else
			cout<<a/b<<endl;
			break;
		case'*':
			cout<<a*b<<endl;
			break;
		case'%':
			cout<<(int)a%(int)b<<endl;
			break;
		default:
			cout<<"You entered wrong operator"<<endl;
	}
}
main()
{
	float a,b;
	char n;
	cin>>a>>n>>b;
	cal(a,b,n);
}
