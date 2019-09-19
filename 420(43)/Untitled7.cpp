#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string name,roll_no,program;
	public:
	Student set()
	{
		roll_no="SP16-BCS-024";
		name="Zeeshan Ahmad";
		program="CS";
		return*this;
	}
	display()
	{
		cout<<"Roll no="<<roll_no<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"program="<<program<<endl;
	}
};
main()
{
	Student s;
	s.set();
	s.set().display();
}
