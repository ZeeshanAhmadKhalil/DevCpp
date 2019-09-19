#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string a;
    int check=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
    	if(a[i]>='0'&&a[i]<='9')
    	check++;
	}
	if(check==a.length())
	cout<<"the entered is number";
	else
	cout<<"the entered is string";
}
