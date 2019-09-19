#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll_no;
	string name,program;
	public:
		Student(int r,string n,string p)
		{
			name=n;
			roll_no=r;
			program=p;
		}
		Student(string n,string p,int r)
		{
			name=n;
			roll_no=r;
			program=p;
		}
		show()
		{
			cout<<name<<endl;
			cout<<roll_no<<endl;
			cout<<program<<endl;
		}
};
main()
{
	Student s1(24,"Zeeshan","CS"),s2("Faizan","CS",14);
	s1.show();
	s2.show();
}
