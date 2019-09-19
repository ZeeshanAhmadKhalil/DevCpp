#include<iostream>
#include<string.h>
using namespace std;
class Name
{
	string name;
	public:
	set_name(string name)
	{
		this->name=name;
		name="Moon";
		cout<<"Name="<<this->name<<endl;
		cout<<"Nick Name="<<name<<endl;
	}
};
main()
{
	Name n;
	n.set_name("Zeeshan");
}
