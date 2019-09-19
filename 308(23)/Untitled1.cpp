#include<iostream>
#include<string.h>
using namespace std;
class Ali
{
	private:
		string employee_id,designation;
		int salary,age;
		take_exam()
		{
			cout<<"Ali takes exam after 10 lectures."<<endl;
		}
		develop_exam()
		{
			cout<<"Ali develops exam accoring to lectures."<<endl;
		}
		walk()
		{
			cout<<"Ali walks 2 times a day."<<endl;
		}
	public:
		string name,roll_no;
		static int i;
		float year_of_studies,cgpa;
		Ali()
		{
			cout<<"name=";
			cin>>name;
			cout<<"roll_no=";
			cin>>roll_no;
			cout<<"year_of_studies=";
			cin>>year_of_studies;
			cout<<"cgpa=";
			cin>>cgpa;
		}
		study()
		{
			cout<<"Ali studies seven hours a day."<<endl;
		}
		give_exam()
		{
			cout<<"Ali gives exam properly."<<endl;
		}
		play_sports()
		{
			cout<<"Ali plays football in sports."<<endl;
		}
		eat()
		{
			cout<<"Ali eates 3 times a day."<<endl;
		}
};
main()
{
	Ali a;
	a.study();
	a.give_exam();
	a.play_sports();
	a.eat();
	Ali::eat();
}
