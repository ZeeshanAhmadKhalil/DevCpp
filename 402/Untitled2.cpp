#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		string name,roll_no,program;
		Student(Student&s)
		{
			name=s.name;
			roll_no=s.roll_no;
			program=s.program;
		}
		Student()
		{
			name="Zeeshan";
			roll_no="SP16-BCS-024";
			program="CS";
		}
		display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Program="<<program<<endl<<endl;
		}
};
main()
{
	Student *s1=new Student();
	s1->display();
	Student *s2=new Student(*s1);
	s2->display();
	s2->roll_no="SP16-BCS-014";
	s1->display();
}
