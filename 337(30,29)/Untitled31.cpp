#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string name,roll_no;
	public:
		set(char*n,char*r)
		{
			name=n;
			roll_no=r;
		}
		get()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll No="<<roll_no<<endl;
		}
};
main()
{
	Student *s,a;
	s=&a;
	s->set("Zeeshan","SP16-BCS-024");
	s->get();
}
