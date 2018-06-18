// e410.cpp
//	Objetcs as a members of other classes 

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

class ComplexFrac{			//  Complex numbers: has two fractions
	Fraction re,im;			//  member objects
 public:
	ComplexFrac(int,int);  // Constructor
	ComplexFrac(Fraction, Fraction);  // Constructor
    ~ComplexFrac(){cout << "ComplexFrac yokedicisi\n";}
	void print() const;
 };

// Constructor
// first, constructors of the member objects must be called
ComplexFrac::ComplexFrac(int re_in,int im_in): re(re_in,1), im(im_in,1)
{                              
		cout << "Constructor of ComplexFrac" << endl;
}

ComplexFrac::ComplexFrac(Fraction r, Fraction s)
{
       re=r;
       im=s;               
}
// Prints complex numbers on the screen
// print function of the member objects are called
void ComplexFrac::print() const
{
   re.print(); 
   cout << "+i("; 
   im.print();  
    cout << ")\n";
}

//----- Main Function -----
int main()
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
