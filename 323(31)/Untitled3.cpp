#include<iostream>
#include<string.h>
using namespace std;
class Name
{
	string name;
	public:
		string set_get_name(string name)
		{
			this->name=name;
			name="my name";
			cout<<name<<endl;
			cout<<this->name;
		}
};
main()
{
	Name n;
	n.set_get_name("your name");
}
