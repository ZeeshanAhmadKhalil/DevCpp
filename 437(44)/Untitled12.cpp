#include"student.h"
set()
{
	name="Zeeshan";
	roll_no=24;
	program="CS"l
}
Student::Show()
{
	cout<<"Name="<<name<<endl;
	cout<<"program="<<program<<endl;
	cout<<"Roll no="<<roll_no<<endl;
}
main()
{
	Student s;
	s.set();
	s.show();
}
