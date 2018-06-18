#include"Fraction.h"
#include "ComplexFrac.h"

ComplexFrac::ComplexFrac(int re_in, int im_in) : 
                             re(re_in, 1) , im(im_in, 1)
{
	
}

void ComplexFrac::print() const
{
	re.print(); 			// print of Fraction is called
	im.print(); 			// print of Fraction is called
}
