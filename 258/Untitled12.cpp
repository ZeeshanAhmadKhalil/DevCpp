#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char city[25];
	cin>>city;
	int i=0,f=0;
	while(city[i]!='\0')
	{
		if(city[i]=='a'||city[i]=='e'||city[i]=='i'||city[i]=='o'||city[i]=='u')
		f++;
		i++;
	}
	cout<<"There are "<<f<<" vowels"<<endl;
}
