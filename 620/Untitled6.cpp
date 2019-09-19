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
			roll_no=24;
			name="Zeeshan";
			program="BCS";
			return*this;
		}
		show()
		{
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Program="<<program<<endl;
		}
};
main()
{
	Student s;
	s.set();
	s.set().show();
}
