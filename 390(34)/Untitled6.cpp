#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
	string roll_no,name,program;
	float cgpa;
		set();
};
Student::set()
{
	cout<<"Name=";
	cin>>name;
	cout<<"Roll No=";
	cin>>roll_no;
	cout<<"Program=";
	cin>>program;
	cout<<"CGPA=";
	cin>>cgpa;
}
main()
{
	Student s;
	s.set();
}
