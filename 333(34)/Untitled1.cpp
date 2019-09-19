#include<iostream>
#include<math.h>
using namespace std;
class Equation
{
	float a,b,c;
	public:
		set_constants()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"c=";
			cin>>c;
		}
		compute_x()
		{
			if(a==0&&b==0)
			{
				cout<<"The x is undefined as a & b are 0"<<endl;
			}
			else if(a==0)
			{
				cout<<"The x is undefined as a is 0"<<endl;
			}
			else if((b*b-4*a*c)<0)
			{
				cout<<"No Root"<<endl;
			}
			else
			{
				cout<<"x1="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
				cout<<"x2="<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
			}
		}
};
main()
{
	Equation e;
	cout<<"The Equation is ax^2+bx+c=0"<<endl;
	e.set_constants();
	e.compute_x();
}
