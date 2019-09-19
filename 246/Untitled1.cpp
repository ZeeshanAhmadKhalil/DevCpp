#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	if(a>b&&b>c)
	cout<<"a is greater c is smaller"<<endl;
	else if(a>c&&c>b)
	cout<<"a is greater b is smaller"<<endl;
	else if(b>c&&c>a)
	cout<<"b is greater a is smaller"<<endl;
	else if(b>a&&a>c)
	cout<<"b is greater c is smaller"<<endl;
	else if(c>b&&b>a)
	cout<<"c is greater a is smaller"<<endl;
	else if(c>a&&a>b)
	cout<<"c is greater b is smaller"<<endl;
	else if(a==b)
	cout<<"a and b are equal"<<endl;
	else if(a==c)
	cout<<"a and c are equal"<<endl;
	else if(c==b)
	cout<<"b and b are equal"<<endl;
	else
	cout<<"All are equal"<<endl;
}
