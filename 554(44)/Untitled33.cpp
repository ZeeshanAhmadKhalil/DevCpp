#include"Student.h"
Student::set()
{
	name="Zeeshan";
	program="CS";
	roll_no=24;
}
Student::show()
{
	cout<<"Name="<<name<<endl;
	cout<<"Program="<<program<<endl;
	cout<<"Roll no="<<roll_no<<endl;
}
main()
{
	Student s;
	s.set();
	s.show();
}

