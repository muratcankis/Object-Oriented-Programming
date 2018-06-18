#ifndef _complex_
#define _complex_

#include<iostream>
#include"fraction.h"

using namespace std;

class ComplexFrac{			//  Complex numbers: has two fractions
	Fraction re,im;			//  member objects
 public:
	ComplexFrac(int,int);  // Constructor
	ComplexFrac(Fraction, Fraction);  // Constructor
    ~ComplexFrac(){cout << "ComplexFrac yokedicisi\n";}
	void print() const;
 };

#endif
