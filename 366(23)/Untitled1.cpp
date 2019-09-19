#include<iostream>
#include<string.h>
using namespace std;
class Ali
{
	private:
		string employ_id,designation;
		int salary,age;
		get_teacher()
		{
			cout<<"Employ ID=";
			cin>>employ_id;
			cout<<"Designation";
			cin>>designation;
			cout<<"Salary";
			cin>>salary;
			cout<<"Age=";
			cin>>age;
		}
		develop_exam()
		{
			cout<<"He develops exam after 8 lectures"<<endl;
		}
		take_exam()
		{
			cout<<"He takes exam after 10 lectures"<<endl;
		}
		walk()
		{
			cout<<"He walks two times a day"<<endl;
		}
	public:
		string name,roll_no,year_of_studies;
		float cgpa;
		get_student()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Roll No=";
			cin>>roll_no;
			cout<<"Year Of Studies=";
			cin>>year_of_studies;
			cout<<"CGPA=";
			cin>>cgpa;
		}
		study()
		{
			cout<<"He study 10 hrs a day"<<endl;
		}
		give_exam()
		{
			cout<<"He gives exam properly"<<endl;
		}
		play_sports()
		{
			cout<<"He plays football in sports"<<endl;
		}
		eat()
		{
			cout<<"He eats 3 times a day"<<endl;
		}
};
main()
{
	Ali a;
	a.get_student();
	a.study();
	a.give_exam();
	a.play_sports();
	a.eat();
}
