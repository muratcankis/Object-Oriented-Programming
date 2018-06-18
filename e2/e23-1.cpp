// Overloading of function names
#include <iostream>
using namespace std;

struct ComplexT{        // Structure for complex numbers
    float re,im;
};


//--------- Main Function ----------
int main()
{
	ComplexT *ip = new ComplexT;
    (*ip).re = 15;
    (*ip).im = 10;
    
    cout << "(" << (*ip).re <<", " <<  ip->im << ")" << endl;
    
    ip->re = 25;
    ip->im = 50;
    
    cout << "(" << ip->re <<", " << ip->im << ")" << endl;
	
	system("pause");
	return 0;
}
