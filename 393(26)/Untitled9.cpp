#include<iostream>
#include<string>
using namespace std;
class Person
{
	string name,date_of_birth;
	protected:
		string phone_no="0300-5290620";
	public:
		out()
		{
			name="Khan";
			date_of_birth="14-1-1997";
			cout<<"Name="<<name<<endl;
			cout<<"Date Of Birth="<<date_of_birth<<endl;
		}
};
class Student:public Person
{
	string uni;
	public:
		out()
		{
			uni="COMSATS";
			Person::out();
			
			
				cout<<"University="<<uni<<endl;
			
			cout<<phone_no;
		}
};
main()
{
	Student s;
	s.out();
}
