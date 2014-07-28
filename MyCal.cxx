// This is a Code from MyCal Branch 1_0_0
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
	int i;

	double second = 2;
	cout << second << endl;
	
	// DKT 7-28-2014 Create new problem
	i = 1/0;

}

void MyCal::showAdding(void)
{
	int a;
	int b;
	int c;
	
	/*  DKT 7-28-2014  I am using this type of comment to fix the problem and
	 *  eliminate the violation suppression
	c = a + b;  //parasoft-suppress BD-PB-NOTINIT
	*/
	cout << "Result is: " << c << endl;
	cout << "MB was here" << endl;
	
}

