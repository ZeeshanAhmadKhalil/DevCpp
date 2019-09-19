#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll_no;
	string name,program;
	public:
	Student set()
	{
		name="Zeeshan";
		roll_no=24;
		program="BS(CS)";
		return*this;
	}
	show()
	{
		cout<<"Name="<<name<<endl;
		cout<<"Roll no="<<roll_no<<endl;
		cout<<"Program="<<program<<endl;
	}
};
main()
{
	Student s;
	s.set();
	s.set().show();
}
