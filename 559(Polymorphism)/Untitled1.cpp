#include<iostream>
using namespace std;
class Human
{
	public:
		virtual eat()
		{
			cout<<"He eats three times a day"<<endl;
		}
};
class Teacher:public Human
{
	public:
		eat()
		{
			cout<<"He eats after teaching his class"<<endl;
		}
};
class Doctor:public Human
{
	public:
		eat()
		{
			cout<<"He eats after finishing the patient treatment"<<endl;
		}
};
class Student:public Human
{
	public:
		eat()
		{
			cout<<"He eats after finishing his studies"<<endl;
		}
};
main()
{
	Human*H= new Human;
	H->eat();
	Doctor D;
	H=&D;
	H->eat();
	Teacher T;
	H=&T;
	H->eat();
	Student S;
	H=&S;
	H->eat();
}
