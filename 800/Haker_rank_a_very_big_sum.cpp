 #include<iostream>
#include<string.h>
using namespace std;
int array_size;
long long int simpleArraySum(long long int*ar) 
{
	long long int sum=0;
	for(long long int i=0;i<array_size;i++)
	{
		sum=sum+ar[i];
	}
	return sum;
}

int main()
{
    cin>>array_size;
    long long int array[array_size];
    for(int i=0;i<array_size;i++)
    {
    	cin>>array[i];
	}
	cout<<simpleArraySum(array);
}

