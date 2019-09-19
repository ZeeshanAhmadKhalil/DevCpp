#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 class Person
{
	protected:
	int age;
	string name;
	public:
		set();
		eat()
		{
			cout<<"He eats three times a day"<<endl;
		}
		walk()
		{
			cout<<"He walks two times a day"<<endl;
		}
};
class Student:public Person
{
	protected:
	int roll_no;
	string program;
	public:
		set()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Roll No=";
			cin>>roll_no;
			cout<<"Program=";
			cin>>program;
			eat();
			walk();
		}
		study()
		{
			cout<<"He study 7 hrs a day"<<endl;
		}
};
class Teacher:public Person
{
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
			eat();
			walk();
		}
		teach()
		{
			cout<<"He teach very good"<<endl;
		}
};
main()
{
	Student s;
	Teacher t;
	cout<<"Teacher data:"<<endl;
	t.set();
	t.teach(); 
	cout<<"Student data:"<<endl;
	s.set();
	s.study();

}
