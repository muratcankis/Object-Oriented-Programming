// e52.cpp
// Overloading the assignmet opertor for complex Numbers
//	Actually overloading of this opertor for complex numbers is usless
// Operator provided by the compiler does the same job 

#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class ComplexT{		// A class to define complex numbers
    friend ostream & operator<<(ostream &, const ComplexT &);
    friend istream & operator>>(istream &, ComplexT &);
    double re,im;
	char isaret;
 public:
    
	ComplexT(double re_new=0,double im_new=0):re(re_new),im(im_new)
	{}															// Constructor
	void operator=(const ComplexT& );				//assingment operator
	ComplexT operator+(const ComplexT & ) const; // Function of operator +
	void operator()();
    void print() const;
    
};

ostream & operator<<(ostream & out, const ComplexT & z){
    out << z.re <<z.isaret<< z.im <<"i";            
}

istream & operator>>(istream & in, ComplexT & z){
        
    in  >> z.re >> z.isaret;
    in  >> z.im;
    in.ignore();
}

// Function for operator =
// Compiler provides the same function
// The main program rus correctly even if this function is deleted
void ComplexT::operator=(const ComplexT& z)
{
	 re = z.re;
	 im = z.im;
	 cout << "Assignment operator has been invoked" << endl;
}

// function for operator + 
ComplexT ComplexT::operator+(const ComplexT &c) const
{
	cout << "Operator + is called" << endl;
	double re_new, im_new;
	re_new=re+c.re;
	im_new=im+c.im;
	return ComplexT(re_new,im_new);
}

void ComplexT::print() const
{
	cout << "complex number= " << re << " , " << im << endl;
}

void ComplexT::operator()()
{
	cout << "(" << re << " , " << im <<  ")";
}

int main()
{
	ComplexT z;
	cout << "Kompleks sayýyý a+bi seklinde giriniz:\n";
	cin >> z;
	cout << "Girilen sayý: " << z << endl;
	
	system("pause");
	return 0;
}
