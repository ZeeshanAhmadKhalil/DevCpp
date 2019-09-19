#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	int rno;
	float marks,total;
	char name[25];
};
main()
{
	student s[5];
	for(int a=0;a<5;a++)
	{
		cout<<"Information of student"<<a+1<<endl;
		cout<<"Name=";
		cin>>s[a].name;
		cout<<"Roll no=";
		cin>>s[a].rno;
		cout<<"marks";
		cin>>s[a].marks;
		cout<<"total";
		cin>>s[a].total;
		cout<<"percentage="<<s[a].marks/s[a].total*100<<endl;
		if(s[a].marks/s[a].total*100>90)
		cout<<"Grade=A"<<endl;
		else if(s[a].marks/s[a].total*100>80)
		cout<<"Grade=B"<<endl;
		else if(s[a].marks/s[a].total*100>70)
		cout<<"Grade=C"<<endl;
		else if(s[a].marks/s[a].total*100>60)
		cout<<"Grade=D"<<endl;
		else if(s[a].marks/s[a].total*100>50)
		cout<<"Grade=E"<<endl;
		else if(s[a].marks/s[a].total*100>40)
		cout<<"Grade=F"<<endl;
		cout<<endl;
	}
}
