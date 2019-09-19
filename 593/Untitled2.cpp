#include<iostream>
using namespace std;
class Static
{
	static int a;
	public:
		set()
		{
			a=100;
		}
		int get()
		{
			return a;
		}
};
int Static::a;
main()
{
	Static s;
	s.set();
	cout<<"Static="<<s.get()<<endl;
}
