#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected:
		string phone_no="0300-5290620",name,date_of_birth;
	public:
		out()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Date Of Birth=";
			cin>>date_of_birth;
		}	
};
class Student:public Person
{
	protected:
		string university_name;
	public:
		out()
		{
			Person::out();
			cout<<"University Name=";
			cin>>university_name;
			cout<<"Phone Number="<<phone_no<<endl;
		}
};
main()
{
	Student s;
	s.out();
}
