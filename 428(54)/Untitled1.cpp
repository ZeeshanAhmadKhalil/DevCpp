#include<iostream>
#include<string.h>
using namespace std;
 class Person
{
	protected:
		int age;
		string name;
	public:
		set()
		{
		}
};
class Student:public Person
{
	protected:
		int roll_no;
		string proram;
	public:
		set()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Roll_no=";
			cin>>roll_no;
		}
};
class Teacher:public Person
{
	protected:
		int bps;
		string department;
	public:
		set()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"BPS=";
			cin>>bps;
			cout<<"Department=";
			cin>>department;
			cout<<"Age=";
			cin>>age;
		}
};
class Docter:public Person
{
	protected:
		int bps;
		string specialist;
	public:
		set()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"BPS=";
			cin>>bps;
			cout<<"Specialist=";
			cin>>specialist;
		}
};
class Human:public Docter,public Teacher,public Student
{
};
main()
{
	Human h;
	h.set();
	
	// can't call set with h bcz of dimond problem

}
