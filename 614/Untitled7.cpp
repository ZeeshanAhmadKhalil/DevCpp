#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	string name,dob;
	protected:
		string phone_no="03005290620";
	public:
//		set()
//		{
//		}
		out()
		{
			name="Zeeshan";
			dob="14-1-1997";
			cout<<"Name="<<name<<endl;
			cout<<"DOB="<<dob<<endl;
		}
};
class Student:public Person
{
	string uni;
	public:
		set()
		{
			uni="COMSATS";
		}
		out()
		{
			cout<<"University="<<uni<<endl;
			Person::out();
			cout<<"Phone no="<<phone_no<<endl;
		}
};
main()
{
	Student s;
	s.set();
	s.out();
}
