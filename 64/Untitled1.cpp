#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n;
	cout<<"Enter a number 1-7"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"MONDAY";
			break;
		case 2:
			cout<<"TUESDAY";
			break;
		case 3:
			cout<<"WEDNESDAY";
			break;
		case 4:
			cout<<"THIRSDAY";
			break;
		case 5:
			cout<<"FRIDAY";
			break;
		case 6:
			cout<<"SATURDAY";
			break;
		case 7:
			cout<<"SUNDAY";
			break;
		default:
		cout<<"you entered WRONG number";
	}
}
