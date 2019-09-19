#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main()
{
	char name1[25],name2[25];
	cin.getline(name1,25);
	cin.getline(name2,25);
	cout<<strcat(name1,name2)<<endl;
	cout<<strncat(name1,name2,3)<<endl;
	cout<<strcpy(name1,name2)<<endl;
	cout<<strlen(name1)<<endl;
	
}
