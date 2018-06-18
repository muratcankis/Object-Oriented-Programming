#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{              
   double x;                                        
   cout << setprecision(4); 
   cout << "      x   sqrt(x)     x^2 \n\n";
   for(x=2.0; x<=20.0; x++){

       cout << setw(7) << x << "  ";                  
       cout << setw(7) << sqrt(x) << "  ";
       cout << setw(7) << x*x << "\n";           
       
   }
   
   system("pause");                                     
   return 0;
}



