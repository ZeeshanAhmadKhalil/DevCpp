#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string name,program;
	int roll_no;
	public:
		Student set()
		{
			name="Zeeshan";
			roll_no=24;
			program="CS";
			return*this;
		}
		show()
		{
			cout<<name<<endl;
			cout<<roll_no<<endl;
			cout<<program<<endl;
		}
};
main()
{
	Student s;
	s.set();
	s.set().show();
}
