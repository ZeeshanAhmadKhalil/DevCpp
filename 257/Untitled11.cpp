#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	cin>>a;
	char city[a][25];
	for(int i=0;i<a;i++)
	{
		cout<<"city"<<i+1<<"=";
		cin>>city[i];
	}
	for(int i=0;i<a;i++)
	{
		if(city[i][0]=='a'||city[i][0]=='e'||city[i][0]=='i'||city[i][0]=='o'||city[i][0]=='u')
		cout<<city[i]<<endl;
	}
}
