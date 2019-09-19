#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string name;
	string roll_no;
	public:
		set(char*name,char*roll_no)
		{
			this->name=name;
			this->roll_no=roll_no;
		}
		show()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll No="<<roll_no<<endl;
		}
};
main()
{
	Student s;
	s.set("Zeeshan","SP16-BCS-024");
	s.show();
}
