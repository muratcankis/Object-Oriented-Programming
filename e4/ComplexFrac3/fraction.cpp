#include<iostream>
#include"fraction.h"

using namespace std;

Fraction::Fraction(int num, int denom)    // CONSTRUCTOR
{
	numerator=num;
	if (denom==0) denominator=1;
	else denominator=denom;
		 cout << "Constructor of Fraction" << endl;
}

Fraction::Fraction(Fraction & f){ 
      numerator=f.numerator; 
      denominator=f.denominator;                       
}

void Fraction ::print() const
{
	cout << numerator << "/" << denominator ;
}
