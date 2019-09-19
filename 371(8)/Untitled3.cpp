#include<iostream>
using namespace std;
class Marks
{
	int marks;
	char grade;
	public:
		Marks(int m,char g)
		{
			marks=m;
			grade=g;
			cout<<"Marka="<<marks<<endl;
			cout<<"Grage="<<grade<<endl;
		}
};
main()
{
	cout<<"Ali's Data:"<<endl;
	Marks ali(80,'B');
	cout<<"Alina's Data:"<<endl;
	Marks alina(90,'a');
	
}
