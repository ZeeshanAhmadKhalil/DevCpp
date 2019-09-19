#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		int roll_no;
		string name,program;
		set();
		show();
};
Student::set()
{
	name="Zeeshan";
	roll_no=24;
	program="BS(CS)";
}
Student::show()
{
	cout<<"Name="<<name<<endl;
	cout<<"Roll no="<<roll_no<<endl;
	cout<<"Program="<<program<<endl;
}
