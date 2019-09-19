#include<iostream>
using namespace std;
struct Operation
{
	int num1;
	float num2;
};
 int cube(Operation a1);
 int sum1(Operation a1,Operation a2);
 int sum2(Operation a1,Operation a2);
int main()
{
	 Operation a1;
	 Operation a2;
	cout<<"Input value for V1.a=";
	cin>>a1.num1;
	cout<<"Input value for V1.b=";
	cin>>a1.num2;
	cout<<"Input value for V2.a=";
	cin>>a2.num1;
	cout<<"Input value for V2.b=";
	cin>>a2.num2;
	cout<<"Cube of "<<a1.num1<<"="<<cube(a1)<<endl;
	cout<<"Cube of "<<a2.num1<<"="<<cube(a2)<<endl;
	cout<<"Sum of "<<a1.num1<<"+"<<a2.num1<<"="<<sum1(a1,a2)<<endl;
	cout<<"Sum of "<<a1.num2<<"+"<<a2.num2<<"="<<sum2(a1,a2)<<endl;
	return 0;
}
 int cube(Operation a1)
{
	int cube1;
	cube1=a1.num1*a1.num1*a1.num1;
    return cube1;
}
 int sum1(Operation a1,Operation a2)
{
	int sum1;
	sum1=a1.num1+a2.num1;
    return sum1;
}
int sum2(Operation a1,Operation a2)
{
	int sum1;
	sum1=a1.num2+a2.num2;
    return sum1;
}

