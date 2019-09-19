#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll_no;
	string name,program;
	public:
		set();
};
Student::set()
{
	cout<<"Roll no=";
	cin>>roll_no;
	cout<<"Name=";
	cin>>name;
	cout<<"program=";
	cin>>program;
}
main()
{
	Student s;
	s.set();
}
