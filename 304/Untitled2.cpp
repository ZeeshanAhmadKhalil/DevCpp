#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		string employer_id,designation;
		int salary,age;
		get_private()
		{
			cout<<"Employer ID=";
			cin>>employer_id;
			cout<<"Designation=";
			cin>>designation;
			cout<<"Salary";
			cin>>salary;
			cout<<"Age=";
			cin>>age;
		}
		develop_exam()
		{
			cout<<"He develops exam before a week."<<endl;
		}
		taking_exam()
		{
			cout<<"He takes exam after 20 lectures"<<endl;
		}
		walk()
		{
			cout<<"He walks from 5:00am-5:15am regularly"<<endl;
		}
		
		public:
			string name,roll_no;
			float cgpa,year_of_studies;
			Student()
			{
				cout<<"Faizan is a student & a teacher But our relevant is his student character"<<endl;
			}
			get_public()
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
				cout<<"He study from 3:00pm-10:30pm & 4:00am-6:00am"<<endl;
			}
			give_exam()
			{
				cout<<"He gives exam properly"<<endl;
			}
			play_sports()
			{
				cout<<"He plays cricket & football in sports"<<endl;
			}
			eat()
		{
			cout<<"He eats three times in a day"<<endl;
		}
};
main()
{
	Student s;
	s.get_public();
	s.study();
	s.give_exam();
	s.play_sports();
	s.eat();
	
}
