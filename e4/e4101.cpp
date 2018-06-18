// e410.cpp
//	Objetcs as a members of other classes 

#include<iostream>
using namespace std;

class Fraction{       // A class to define fractions
   int numerator,denominator;
 public:
   Fraction(int=0, int=1);
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

void Fraction ::print() const
{
	cout << numerator << "/" << denominator ;
}

class ComplexFrac{			//  Complex numbers: has two fractions
	Fraction re,im;			//  member objects
 public:
	ComplexFrac(int,int);  // Constructor
	ComplexFrac(Fraction,Fraction);
    ~ComplexFrac(){cout << "ComplexFrac yokedicisi\n";}
	void print() const;
 };

// Constructor
// first, constructors of the member objects must be called
ComplexFrac::ComplexFrac(int re_in,int im_in): re(re_in), im(im_in)
{
		cout << "Constructor of ComplexFrac" << endl;
}


ComplexFrac::ComplexFrac(Fraction f1,Fraction f2){
          re=f1;
          im=f2;                                  
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
       
       ComplexFrac cg(Fraction(2,3),Fraction(5,2));		
       cg.print();	
    }				// Complex number is printed on the screen
	system("pause");
    return 0;
}
