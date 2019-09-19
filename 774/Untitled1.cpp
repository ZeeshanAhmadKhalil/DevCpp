#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	int prime=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			prime++;
			break;
		}
	}
	if(prime>0)
	cout<<"not prime";
	else
	cout<<"prime";
}

