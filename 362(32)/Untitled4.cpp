#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		string name,roll_no,program;
		float cgpa;
		get();
};
Student::get()
{
	cout<<"Name=";
	cin>>name;
	cout<<"Roll No=";
	cin>>roll_no;
	cout<<"Program";
	cin>>program;
	cout<<"CGPA=";
	cin>>cgpa;
}
main()
{
	Student s;
	s.get();
}
