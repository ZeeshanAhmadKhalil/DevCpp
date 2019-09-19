#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll_no;
	string name,program;
	public:
		set()
		{
			name="Zeeshan";
			roll_no=24;
			program="BCS";
		}
		show()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Program="<<program<<endl;
		}
};
main()
{
	Student*s,a;
	a.set();
	s=&a;
	s->show();
	cout<<s<<endl<<&a<<endl;
}
