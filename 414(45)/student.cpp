#include"student.h"
Student::set(int roll_no)
{
	this->roll_no=roll_no;
	cout<<"Roll No="<<this->roll_no<<endl;
}
main()
{
	Student s;
	s.set(24);
}
