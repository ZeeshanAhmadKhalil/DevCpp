#include<iostream>
#include<conio.h>
using namespace std;
struct student_i
{
	char rno[12],name[25];
};
struct student_m
{
	float marks,total;
};
main()
{
	student_i s1[2];
	student_m s2[2];
	for(int a=0;a<2;a++)
	{
		cout<<"Information of student "<<a<<" :"<<endl;
		cout<<"Name    =";
		cin>>s1[a].name;
		cout<<"Roll no =";
		cin>>s1[a].rno;
		cout<<"Marks   =";
		cin>>s2[a].marks;
		cout<<"total   =";
		cin>>s2[a].total;
		cout<<"% age   ="<<s2[a].marks/s2[a].total*100<<endl<<endl;	
			
	}
}
