#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a=1;
	char ch;
	while (a<2)
	{
	cin>>ch;
	switch (ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout<<"Vowel"<<endl<<endl;
			break;
		default:
			cout<<"Not Vowel"<<endl<<endl;
	}
}
}
