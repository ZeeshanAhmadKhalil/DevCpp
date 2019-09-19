#include<iostream>
#include<math.h>
using namespace std;
class Quadratic
{
	int a,b,c;
	public:
		set()
		{
			cout<<"Your equation is:"<<endl<<"ax^2+bx+c=0"<<endl;
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"c=";
			cin>>c;
		}
		compute()
		{	if(a==0)
			cout<<"Math Error"<<endl;
			else
			{
			if((b*b-4*a*c)>=0)
			{
				cout<<"X1="<<((-b+sqrt(b*b-4*a*c))/(2*a))<<endl;
			cout<<"X2="<<((-b-sqrt(b*b-4*a*c))/(2*a))<<endl;
			}
			else
			cout<<"complex roots"<<endl;
			}
		}
};
main()
{
	Quadratic q;
	q.set();
	q.compute();
}
