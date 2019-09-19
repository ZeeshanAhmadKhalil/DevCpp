#include<iostream>
#include<string.h>
using namespace std;
static string  a="Moon";
class Static
{
	public:
		static set(string A)
		{
			a=A;
			static string A_=A;
			cout<<a<<endl;
			cout<<A_<<endl;
		}
};
main()
{
	Static s;
	s.set("Zeeshan1");
	Static::set("Zeeshan2");
}
