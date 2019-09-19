#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	float marks,total;
	char name[25];
	 
};
main()
{
	student s[5];
	for(int a=0;a<5;a++)
	{
		cout<<"Information of student "<<a+1<<endl;
		cout<<"Name=";
		cin>>s[a].name;
		cout<<"Marks";
		cin>>s[a].marks;
		cout<<"Total";
		cin>>s[a].total;
		cout<<"Percentage="<<s[a].marks/s[a].total*100<<endl;
		cout<<"Grade=";
		if(s[a].marks/s[a].total*100>=90&&s[a].marks/s[a].total*100<100)
		cout<<"A";
		else if(s[a].marks/s[a].total*100>=80&&s[a].marks/s[a].total*100<90)
		cout<<"B";
		else if(s[a].marks/s[a].total*100>=70&&s[a].marks/s[a].total*100<80)
		cout<<"C";
		else if(s[a].marks/s[a].total*100>=60&&s[a].marks/s[a].total*100<70)
		cout<<"D";
		else if(s[a].marks/s[a].total*100>=50&&s[a].marks/s[a].total*100<60)
		cout<<"E";
		else
		cout<<"F";
		cout<<endl<<endl;
	}
}
