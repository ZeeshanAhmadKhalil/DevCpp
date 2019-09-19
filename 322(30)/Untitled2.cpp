#include<iostream>
using namespace std;
class Student
{
	string name,roll_no,program;
	float cgpa;
	public:
		set_name(string n)
		{
			name=n;
		}
		string get_name()
		{
			return name;
		}
		set_roll_no(string r)
		{
			roll_no=r;
		}
		string get_roll_no()
		{
			return roll_no;
		}
};
main()
{
	Student*s;
	Student a;
	s=&a;
	s->set_name("Zeeshan");
	cout<<s->get_name()<<endl;
	s->set_roll_no("SP16-BCS-024");
	cout<<s->get_roll_no();
}
