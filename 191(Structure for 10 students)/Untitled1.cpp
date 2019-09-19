#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	float marks;
	float rno;
	float total;
};
main()
{

	student  s[5];
	for(int a=0;a<5;a++)
	{
		cout<<"Information of "<<a<<" student:"<<endl;
		cout<<"Roll no=";
		cin>>s[a].rno;
		cout<<"Marks=";
		cin>>s[a].marks;
		cout<<"Total=";
		cin>>s[a].total;
		cout<<"%age="<<s[a].marks/s[a].total*100<<endl<<endl;
	}
}
