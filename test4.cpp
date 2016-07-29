#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{	
	int sum = 0;
	int num;
	int counter =0;
	int power = 1;
	int remainder = 0;
	cout<<"8-bit Binary Number = ";
	cin>> num;
	
	bool valid = true;
	bool notvalid = true;
	
	while(notvalid)
	{
		remainder = num%10;
		
		if(remainder==1 || remainder ==0)
		{
			sum = sum + (remainder*power);
		}
		else
		{	
			cout<<"PLease insert binary number!";
			return 0;
		}
		
		power = power*2;
		counter = counter +1;
		num=num/10;
		
		if(counter ==8)
		{
			notvalid = false;
		}
	}
	
	if (valid)
	{
		cout<<"Decimal Number = " <<sum;
	}
	cout << endl << endl;
	system ("pause");
}
	