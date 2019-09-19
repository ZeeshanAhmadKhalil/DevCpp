#include<iostream>
#include<string.h>
using namespace std;
int array_size;
int simpleArraySum(int*ar) //<--------------FUNCTION
{
	int sum=0;
	for(int i=0;i<array_size;i++)
	{
		sum=sum+ar[i];
	}
	return sum;//<----------------Returning
}

int main()
{
    cin>>array_size;
    int array[array_size];
    for(int i=0;i<array_size;i++)
    {
    	cin>>array[i];
	}
	cout<<simpleArraySum(array);//<-------Calling
}
