#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll_no;
	string name;
	string program;
	public:
		Student set()
		{
			roll_no=24;
			name="Zeeshan";
			program="CS";
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
	Student s1;
	s1.set();
	s1.set().show();
}
