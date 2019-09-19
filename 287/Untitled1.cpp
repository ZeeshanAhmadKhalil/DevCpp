#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student
{
	private:
	static int r;
	int rollno,marks;
	string name;
	public:
	student()
	{
		r++;
		rollno=r;
	}
	get()
	{
		cout<<"Name=";
		cin>>name;
		cout<<"Marks=";
		cin>>marks;
	}
	rno()
	{
		cout<<"Rollno="<<rollno<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Marks="<<marks<<endl;
	}
	
};
int student::r=0;
main()
{
	student s1,s2;
	s1.get();
	s2.get();
	cout<<endl;
	s1.rno();
	cout<<endl;
	s2.rno();
}
