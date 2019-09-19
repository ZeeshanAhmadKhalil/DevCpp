#include<iostream>
#include<string.h>
using namespace std;
class Student 
{
	int roll_no;
	string program,name;
	public:
		Student()
		{
		}
		set()
		{
			roll_no=24;
			name="Zeeshan";
			program="CS";
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
	Student s1;
	s1.set();
	s1.show();
	Student s2=s1;
	s2.show();
	cout<<&s1<<endl<<&s2<<endl;
	
}
