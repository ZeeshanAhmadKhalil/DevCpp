#include<iostream>
using namespace std;
class Person
{
	public:
		virtual eat()
		{
			cout<<"He eats 3 times a day"<<endl;
		}
};
class Doctor:public Person
{
	public:
		virtual eat()
		{
			cout<<"He eats after treating the patient"<<endl;
		}
};
class Student:public Person
{
	public:
		virtual eat()
		{
			cout<<"He eats after finishing his work"<<endl;
		}
};
class Teacher:public Person
{
	public:
		virtual eat()
		{
			cout<<"He eats after teaching his class"<<endl;
		}
};
main()
{
	Person*p=new Person;
	p->eat();
	Student s;
	p=&s;
	p->eat();
	Doctor d;
	p=&d;
	p->eat();
	Teacher t;
	p=&t;
	p->eat();
}
