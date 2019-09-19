#include<iostream>
using namespace std;
class Result
{
	int marks;
	char grade;
	public:
		Result(int m,char g)
		{
			marks=m;
			grade=g;
		}
		out()
		{
			cout<<"Marks="<<marks<<endl;
			cout<<"Grade="<<grade<<endl;
		}
};
main()
{
	Result ali(80,'B'),alina(90,'A');
	cout<<"Ali's Result:"<<endl;
	ali.out();
	cout<<"Alina's Result:"<<endl;
	alina.out();
}
