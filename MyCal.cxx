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
	double second = 2;
	cout << second << endl;
	
}

void MyCal::showAdding(void)
{
	int a;
	int b;
	int c;
	
	c = a + b;  //parasoft-suppress BD-PB-NOTINIT
	cout << "Result is: " << c << endl;
	cout << "MB was here" << endl;
	
}

