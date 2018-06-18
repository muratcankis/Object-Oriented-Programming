#include <cstdlib>
#include <iostream>

#include"complex.h"
using namespace std;

int main(int argc, char *argv[])
{
    {
	   ComplexFrac cf(2,5);				// A complex number is created
	   cf.print();			
	   
	   Fraction f1(3,5), f2(4,5);
	   ComplexFrac ccf(f1,f2);
	   ccf.print();
	   
    }				// Complex number is printed on the screen
	system("pause");
    return 0;
}
