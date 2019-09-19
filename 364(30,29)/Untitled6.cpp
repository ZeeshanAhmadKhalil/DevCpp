#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string roll_no,name;
	public:
		set(char*r,char*n)
		{
			roll_no=r;
			name=n;
		}
		get()
		{
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Name="<<name<<endl;
		}
};
main()
{
	Student *s,a;
	s=&a;
	s->set("SP16-BCS-024","Zeeshan Ahmad Khalil");
	s->get();
}
