#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	string name,date_of_birth;
	protected:
		string phone_no="0300-5290620";
	public:
		set_per()
		{
			name="Zeeshan Ahmad Khalil";
			date_of_birth="14-1-1997";
		}
		out()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Date Of Birth="<<date_of_birth<<endl;
		}
};
class Student:public Person
{
	string university;
	public:
	set_stu()
	{
		university="COMSATS";
	}
	out()
	{
		Person::out();
		cout<<"University="<<university<<endl;
		cout<<"Phone number="<<phone_no<<endl;
	}
};
main()
{
	Student s;
	s.set_per();
	s.set_stu();
	s.out();
}
