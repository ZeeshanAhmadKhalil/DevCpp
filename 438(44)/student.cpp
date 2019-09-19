#include"student.h"
Student::set()
{
	roll_no=4;
}
Student::show()
{
	cout<<"Roll no="<<roll_no<<endl;
}
main()
{
	Student s;
	s.set();
	s.show();
}
