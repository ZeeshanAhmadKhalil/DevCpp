#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	string roll_no,name;
	public:
		set(char*n,char*r)
		{
			name=n;
			roll_no=r;
			cout<<"Name="<<name<<endl;
			cout<<"Roll No="<<roll_no;
		}
};
main()
{
	Student a,*s;
	s=&a;
	s->set("zeeshan","024");
}
