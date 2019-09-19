#include"Calculate.cpp"
#include"windows.h"
main()
{
	char con='y';
	Calculate c;
	string infix;
	while(con=='y')
	{
		cout<<"INFIX=";
		cin>>infix;
		cout<<"POSTFIX="<<c.in_to_post(infix)<<endl;
		cout<<"RESULT="<<c.execute_postfix(c.in_to_post(infix))<<endl;
		cout<<"Continue(y/n)"<<endl;
		cin>>con;
		system("cls");
	}
}
