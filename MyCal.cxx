#include "MyCal.hxx"

#include <iostream>
using namespace std;

void MyCal::showFirstNumber()
{
	int first = 1;
    	cout << first << endl;
	
}

void MyCal::showSecondNumber()
{
	double i;	
	double second = 2;
	cout << second << endl;
	
}

void MyCal::showThirdNumber()
{
	double j;
	int k;
	int l;  // lets test this
	int x;
	int y;

	l = x - y;

	l = j + k;	 // parasoft-suppress BD-PB-NOTINIT "For Testing"
	double third = 3;
	cout << third << endl;
	
}

void MyCal::showAdding(void)
{
	int a;
	int b;
	int c;
	
	c = a + b;
	cout << "Result is: " << c << endl;
	
}

