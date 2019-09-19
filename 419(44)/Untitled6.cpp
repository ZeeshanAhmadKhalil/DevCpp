#include"Untitled5.h"
Student::set()
{
	roll_no="SP16-BCS-024";
	name="Zeeshan Ahmad";
	program="CS";
}
Student::display()
{
	cout<<"Roll no="<<roll_no<<endl;
	cout<<"Name="<<name<<endl;
	cout<<"program="<<program<<endl;
}
main()
{
	Student s;
	s.set();
	s.display();
}
