#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char cha[4];
	cout<<"Enter your name in 4 characters"<<endl;
	for(int a=0;a<4;a++)
	{
		cin>>cha[a];
	}
    for(int a=0;a<4;a++)
    {
    	cout<<cha[0]<<cha[1]<<cha[2]<<cha[3]<<endl;
	}
}