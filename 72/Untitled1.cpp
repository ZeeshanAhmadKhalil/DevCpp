#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float marks,totalmarks;
	cout<<"Enter your marks";
	cin>>marks;
	cout<<"Total marks";
	cin>>totalmarks;
	cout<<"Result is"<<((marks/totalmarks*100)>50?"pass":"fail");
}
