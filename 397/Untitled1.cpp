#include<iostream>
using namespace std;
class Student
{
	public:
		int roll_no;
		Student()
		{
			roll_no=24;
			cout<<roll_no<<endl;
		}
		Student(Student&s)
		{
			roll_no=s.roll_no;
			cout<<roll_no<<endl;
			roll_no=14;
			cout<<roll_no<<endl;
		}
};
main()
{
	Student s1;
	Student s2=s1;
	s1.roll_no=7;
	cout<<s2.roll_no<<endl;
	cout<<s1.roll_no<<endl;
	Student s3;
}
