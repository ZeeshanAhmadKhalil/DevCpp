#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char name1[10],name2[10];
	cout<<"Enter your name"<<endl;
	cin>>name1>>name2;
	cout<<"1)Your name  ="<<strcat(name1,name2)<<endl;
	cout<<"2)Use of ncat="<<strncat(name1,name2,3)<<endl;
	cout<<"3)Use of cpy ="<<strcpy(name1,name2)<<endl;
	cout<<"4)Use of len ="<<strlen(name1)<<endl;
}
