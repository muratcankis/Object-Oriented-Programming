#include <iostream>
#include"Fraction.h"
using namespace std;

Fraction::Fraction(int num, int denom) 	// CONSTRUCTOR
{
	pay = num;
	if (denom==0) payda = 1;
	else payda = denom;
		cout << "Kesirin inþasý" << endl;
}

void Fraction::print() const
{
cout << pay << "/" << payda << endl;
}
