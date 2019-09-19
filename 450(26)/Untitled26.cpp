#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected:
		string phone_no="03005290620";
	public:
		out()
		{
			cout<<"Name=Zeeshan"<<endl;
			cout<<"DOB=14-1-1997"<<endl;
		}		
};
class Student:public Person
{
	public:
		out()
		{
			cout<<"University=COMSATS"<<endl;
			Person::out();
			cout<<phone_no<<endl;
		}
};
main()
{
	Student s;
	s.out();
}
