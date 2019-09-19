#include<iostream>
#include<string.h>
using namespace std;
class Static
{
	static string name;
	public:
		set()
		{
			name="Zeeshan";
			cout<<name<<endl<<"Name=";
			cin>>name;
			cout<<name<<endl;
		}
};
string Static::name;
main()
{
	Static s;
	s.set();
}
