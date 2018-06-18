// Example for opertor overloading

#include <iostream>
using namespace std;

class ComplexT{    //structure for Complex numbers
   public:
   float re,im;
   
   ComplexT operator+(const ComplexT & );
   void print();
};

/* Overloadinf of + perator for complex numbers */
ComplexT ComplexT::operator+(const ComplexT &v) // c1.operator+(c2)  ... c1+c2
{
   ComplexT result;
   result.re=re+v.re;
   result.im=im+v.im;
   return result;
}

/*ComplexT(ComplexT &v)
{
   this->re=v.re;
   this->im=v.im;
   return *this;
}
*/

void ComplexT::print(){    // print function for complex numbers
   cout<< "real= " << re << " im= " << im << endl;
}

//-------- main function -------------
int main()
{
	ComplexT c1,c2,c3;	
	c1.re=0.5;
	c1.im=-1;
	c2.re=1.5;
	c2.im=0.5;
	c3=c1+c2;					// Calling the operator+ function
	c3.print();
    ComplexT *cp = new ComplexT[3];
    cp[0]=c1;
    cp[1]=c2;
    cp[2]=c3;
    
 
    
	system("pause");
	return 0;
}
