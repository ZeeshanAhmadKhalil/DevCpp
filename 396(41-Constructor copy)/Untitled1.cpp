#include<iostream>
using namespace std;
class Student
{
	public:
		static int roll_no;
		Student()
		{
			roll_no=024;
		}
		Student(Student&s)
		{
			roll_no=s.roll_no;
			cout<<roll_no<<endl;
		}
};

main()
{
	Student *s1;
	Student *s2=s1;
	
}
