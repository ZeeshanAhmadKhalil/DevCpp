#include<iostream>
#include<conio.h>
using namespace std;
class result
{
	private:
	char rno[15],name[20];
	float marks[5];
	public:
	in()
	{
		cout<<"Roll no=";
		cin>>rno;
		cout<<"Name=";
		cin>>name;
		cout<<"Marks:"<<endl;
		cout<<"ITCP=";
		cin>>marks[0];
		cout<<"ECA=";
		cin>>marks[1];
		cout<<"CAG=";
		cin>>marks[2];
		cout<<"ECAC=";
		cin>>marks[3];
		cout<<"ISL=";
		cin>>marks[4];
	}
	s1gpa()
	{
		cout<<endl<<"GPA="<<(marks[0]*4+marks[1]*4+marks[2]*3+marks[3]*3+marks[4]*3)/17<<endl;
	}
};
main()
{
	result r;
	r.in();
	r.s1gpa();
}
