#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		string employer_id,designation;
		int salary,age;
		get()
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
		eat()
		{
			cout<<"He eats three times in a day"<<endl;
		}
		
};
