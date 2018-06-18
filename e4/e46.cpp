// e46.cpp
//	Static Members

#include <iostream>
using namespace std;

class A{
  char c;
  static int number;						//  Number of created objects (static data)
 public:
  static void setNum(){number=0;}	// Static function to initialize number
  A(){number++; cout<< "\n"<< "Constructor "<< number<< endl;} //Constructor
  ~A(){number--; cout<< "\n"<< "Destructor "<< number<< endl;} //Destructor
};

int A::number;     // Allocating memory for number

// ----- Main function -----
int main()
{ 
    A::setNum();  // The static function is called
   
    {
    
        cout<<"\n Entering 1. BLOCK............";
       		
        A a,b,c;
        {
             cout<<"\n Entering 2. BLOCK............";
             A d,e;
             cout<<"\n Exiting 2. BLOCK............";
        }
        cout<<"\n Exiting 1. BLOCK............";
 
    }
    
    system("pause");
    return 0;
  
}
