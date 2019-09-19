#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char name[25];
	int a=0;
	cin.getline(name,25);
	while(name[a]!='\0')
	{
		a++;
	}
	cout<<"The characters in "<<name<<" are "<<a<<"."<<endl;
}
