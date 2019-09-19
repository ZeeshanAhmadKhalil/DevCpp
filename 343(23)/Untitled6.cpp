#include<iostream>
#include<string.h>
using namespace std;
class Ali
{
	private:
		string employ_id,designation;
		int age,salary;
		get_teacher()
		{
			cout<<"Employ ID=";
			cin>>employ_id;
			cout<<"Designation=";
			cin>>designation;
			cout<<"Salary";
			cin>>salary;
			cout<<"Age=";
			cin>>age;
		}
		develop_exam()
		{
			cout<<"He develops exam after 10 lectures"<<endl;
		}
		take_exam()
		{
			cout<<"He takes exam after 12 lectures"<<endl;
		}
		walk()
		{
			cout<<"He walks 2 hrs every day"<<endl;
		}
	public:
		string name,roll_no,year_of_studies;
		float cgpa;
		get_student()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Roll no=";
			cin>>roll_no;
			cout<<"Year of Studies=";
			cin>>year_of_studies;
			cout<<"CGPA=";
			cin>>cgpa;
		}
		study()
		{
			cout<<"He studies 10 hrs a day"<<endl;
		}
		give_exam()
		{
			cout<<"He gives exam properly"<<endl;
		}
		plays_sports()
		{
			cout<<"He plays cricket in sports"<<endl;
		}
		eat()
		{
			cout<<"He eates three times a day"<<endl;
		}
};
main()
{
	Ali a;
	a.get_student();
	a.study();
	a.give_exam();
	a.plays_sports();
	a.eat();
}
