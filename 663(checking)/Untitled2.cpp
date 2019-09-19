#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	float year;
	char c[1];
	c[0]=str[0];
	cout<<c[0]<<endl;
//	cin>>c;
//	char c[0]=str[0];
	year = atoi (c);
	cout<<year<<endl;
}
