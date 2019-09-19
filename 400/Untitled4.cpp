#include<iostream>
#include<new>
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
		display()
		{
			cout<<"Roll_no="<<roll_no<<endl;
		}
};
int main()
{

	Student *s2=new Student;
	s2->roll_no=14;
	s2->display();
	Student s1;
	Student s3=s1;
	cout<<"For s1:";
	s1.display();
	cout<<"For s2:";
	s2->display();
	cout<<"For s3:";
	s1.display();
}
