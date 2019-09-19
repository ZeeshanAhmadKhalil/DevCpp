#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		string name,roll_no,program;
		float cgpa;
		string get_name();
		string get_roll_no();
		string get_program();
		float get_cgpa();
};
string Student::get_name()
{
	name="Zeeshan Ahmad Khalil";
	return name;
}
string Student::get_roll_no()
{
	roll_no="SP16-BCS-024";
	return roll_no;
}
string Student::get_program()
{
	program="BS(Computer Science)";
	return program;
}
float Student::get_cgpa()
{
	cgpa=3.95;
	return cgpa;
}
main()
{
	Student s;
	cout<<"Name="<<s.get_name()<<endl;
	cout<<"Roll no="<<s.get_roll_no()<<endl;
	cout<<"Program="<<s.get_program()<<endl;
	cout<<"CGPA="<<s.get_cgpa()<<endl;
}
