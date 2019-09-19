#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float a,b,c;
	cout<<"ax^2+bx+c=0"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	if(a==0)
	cout<<"x="<<-c/b<<endl;
	else if((b*b-4*a*c)<0)
	cout<<"Complex"<<endl;
	else
	{
		cout<<"x1="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
		cout<<"x2="<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
	}
}
