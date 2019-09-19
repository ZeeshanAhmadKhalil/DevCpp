#include<iostream>
using namespace std;
struct emp
{
	int id,grade;
	float salary,bonus;
	char name[25];
};
main()
{
	emp p[5];
	for(int a=0;a<3;a++)
	{
		cout<<"Information of employer "<<a+1<<endl;
		cout<<"ID=";
		cin>>p[a].id;
		cout<<"Name=";
		cin>>p[a].name;
		cout<<"salary=";
		cin>>p[a].salary;
		cout<<"Grade";
		cin>>p[a].grade;
		if(p[a].grade>10)
		p[a].bonus=p[a].salary/100*75;
		else if(p[a].grade>5)
		p[a].bonus=p[a].salary/100*50;
		else
		p[a].bonus=p[a].salary/100*30;
		cout<<"Bonus="<<p[a].bonus<<endl;
		cout<<"Total="<<p[a].salary+p[a].bonus<<endl<<endl;
	}
}

