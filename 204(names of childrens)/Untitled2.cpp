#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"How many children do you have:"<<endl;
	cin>>n;
	char children[n][25];
	cout<<"Enter names of your children:"<<endl;
	for(int a=0;a<n;a++)
	{
		cout<<a+1<<")";
		cin>>children[a];
	}
} 
