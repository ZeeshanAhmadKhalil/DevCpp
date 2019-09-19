#include<iostream>
#include<math.h>
using namespace std;
class Equation
{
	float a,b,c;
	public:
		constants()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"c=";
			cin>>c;
		}
		compute()
		{
			if(a==0&&b==0)
			cout<<"Undefined & Complex roots"<<endl;
			else if(a==0)
			cout<<"Undefined roots"<<endl;
			else if((b*b-4*a*c)<0)
			cout<<"Complex roots"<<endl;
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
	e.constants();
	e.compute();
}
