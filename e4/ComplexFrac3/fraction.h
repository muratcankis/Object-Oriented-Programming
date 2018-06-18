


#ifndef _fraction_
#define _fraction_

#include<iostream>
using namespace std;

class Fraction{       // A class to define fractions
   int numerator,denominator;
 public:
   Fraction(int=1, int=1);
   Fraction(Fraction & );
   ~Fraction(){cout << "fraction yokedicisi\n"; }
	void print() const;
};

#endif
