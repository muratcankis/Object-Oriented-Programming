// e51.cpp
//	Overloading of operator + 
#include <iostream>
using namespace std;

class ComplexT{
	 double re,im;
 public:
	 ComplexT(double re_in=0,double im_in=1);      // Constructor
	 ComplexT operator-(const ComplexT & ) const; // Function of operator -
	 ComplexT operator+(const ComplexT & ) const; // Function of operator +
	 ComplexT operator*(const ComplexT & ) const; // Function of operator *
	 ComplexT & operator=(const ComplexT & ); // Function of operator *
	 ComplexT & operator++(); // Function of operator ++ preincrement
     ComplexT  operator++(int); // Function of operator ++ postincrement
     ComplexT & operator--(); // Function of operator ++ preincrement
     ComplexT & operator--(int); // Function of operator ++ postincrement
     friend ostream & operator<<(ostream&, const ComplexT &);
     void print() const;
};

// Default Constructor
ComplexT::ComplexT(double re_in, double im_in)
{
	re=re_in;
	im=im_in;
	cout  << "Constructor has been invoked:" << endl ;
}

ComplexT & ComplexT::operator=(const ComplexT &z)
{
	re=z.re;
	im=z.im;
	return *this;
}

// function for operator + 
ComplexT ComplexT::operator+(const ComplexT &c) const
{
	double re_new, im_new;
	re_new=re+c.re;
	im_new=im+c.im;
	return ComplexT(re_new,im_new);
}

ComplexT ComplexT::operator-(const ComplexT &c) const
{
    double re_new, im_new;
    re_new=re-c.re;
    im_new=im-c.im;   
    return ComplexT(re_new,im_new);      
}

ComplexT ComplexT::operator*(const ComplexT &c) const
{
    double re_new, im_new;
    re_new=(re*c.re)-(im*c.im);
    im_new=(re*c.im)+(im*c.re);
    return ComplexT(re_new,im_new);
}

ComplexT & ComplexT::operator++()
{
   re=re+0.1;
   im=im+0.1;
   return *this;     
}

ComplexT  ComplexT::operator++(int)
{
   ComplexT temp;
   temp=*this;
   re=re+0.1;
   im=im+0.1;
   return temp;
         
}

ComplexT & ComplexT::operator--()
{
   re=re-0.1;
   im=im-0.1;
   return *this;     
}

ComplexT & ComplexT::operator--(int)
{
   ComplexT temp;
   temp=*this;
   re=re-0.1;
   im=im-0.1;
   return temp;
         
}

ostream & operator<<(ostream &o, const ComplexT &c)
{
   o<<"("<<c.re<<","<<c.im<<")";
   return o;      
        
}
  




void ComplexT::print() const
{
	cout << endl << "re=" << re << ", im=" << im << endl;
}

int main()
{
 ComplexT z1(1,1),z2(2,2),z3;
 z3=z2;
 z3.print();
 z3=z1+z2;								// like z3 = z1.operator+(z2);
 z3.print();
 z3=z2-z1;
 z3.print();
 z3=z1*z2;
 z3.print();
 z3=++z1;
 z3.print();
 z3=z1++;
 z3.print();
 z1.print();
 
 
 cout<<z1<<endl;
 cout<<z1<<"+"<<z2<<"="<<(z3=z1+z2)<<endl;
 cout << endl;
 z3--;
 z3.print();
  system("pause");
 return 0;
}
