#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int marks,total;
	cin>>marks>>total;
	int per;
	per=(marks/total*100);
	if(per>90)
	cout<<"A";
	else if(per>80)
	cout<<"B";
	else if(per>70)
	cout<< "C";
	else if(per>60)
	cout<< "D";
	else if(per>50)
	cout<< "E";
}
