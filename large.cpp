#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter three numbers:";
	cin>>num1>>num2>>num3;
	if(num1>num2)
	{
		if(num1>num3)
		cout<<"largest number is:"<<num1;
		else
		cout<<"largest number is:"<<num3;
		
	}
	else
	{
		if(num2>num3)
		cout<<"largest number is:"<<num2;
		else
		cout<<"largest number is:"<<num3;
	}
}
