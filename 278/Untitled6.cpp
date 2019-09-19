#include<iostream>
#include<conio.h>
using namespace std;
class record
{
	private:
	int marks;
	char grade;
	public:
	record(int m,char g)
	{
		marks=m;
		grade=g;
	}
	show()
	{
		cout<<"Marks="<<marks<<endl;
		cout<<"Grade="<<grade<<endl;
	}
};
main()
{
	record s1(750,'A'),s2(650,'B');
	cout<<"Record of student 1"<<endl;
	s1.show();
	cout<<"Record of student 2"<<endl;
	s2.show();	
}
