#include<iostream>
using namespace std;
static int a;
class Static
{
	//static int b=1; 
	public:
 display(int A)
		{
			static int b=A;
			cout<<a<<endl;
			a=A;
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
main()
{
	Static s;
	s.display(40);
	Static::display(90);
}
