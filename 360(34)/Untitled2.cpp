#include<iostream>
#include<math.h>
using namespace std;
class Equation
{
	float a,b,c;
	public:
		get_constants()
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
				cout<<"value of x is undefined as a & b is 0"<<endl;
			}
			else if(a==0)
			{
				cout<<"value of x is undefined as a is 0"<<endl;
			}
			else if((b*b-4*a*c)<0)
			{
				cout<<"NO root"<<endl;
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
	e.get_constants();
	e.compute_x();
}
