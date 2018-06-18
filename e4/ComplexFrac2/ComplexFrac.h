#include"Fraction.h"

#ifndef _complexfrac
#define _complexfrac
class ComplexFrac{ 			// Complex numbers, real and imag. parts are fractions
		Fraction re, im; 		// objects as data members of another class
	public:
		ComplexFrac(int,int); 		// Constructor
		void print() const;
};
#endif
