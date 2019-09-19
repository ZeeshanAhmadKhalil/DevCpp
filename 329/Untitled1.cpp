#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string roll_no,name,program;
	public:
		string get_roll_no();
		string get_name();
		string get_program();
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
main()
{
	Student s;
	cout<<"Name="<<s.get_name()<<endl;
	cout<<"Roll No="<<s.get_roll_no()<<endl;
	cout<<"Program="<<s.get_program()<<endl;
}
