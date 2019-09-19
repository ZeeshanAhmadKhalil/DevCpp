#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string name,roll_no;
	public:
		set(char*name,char*roll_no)
		{
			this->name=name;
			this->roll_no=roll_no;
		}
		get()
		{
			cout<<"Name="<<name;
			cout<<"Roll_no="<<roll_no;
		}
};
main()
{
	Student a,*s;
	a.set("Zeeshan","SP16-BCS-024");
	s=&a;
	s->get();
}
