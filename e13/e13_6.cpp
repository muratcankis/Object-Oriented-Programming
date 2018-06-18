#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{              
   double x;    
                                       
   cout.precision(3); 
   cout << "      x   sqrt(x)     x^2 \n\n";
   for(x=2.0; x<=20.0; x++){
       cout.unsetf(ios::fixed);          
       cout.width(7);
       cout << x << "  ";   
       cout.setf(ios::fixed);               
       cout.width(7);
       cout << fixed << sqrt(x) << "  ";
       
       cout << setw(8)<< x*x << "\n";           
       
   }
   
   system("pause");                                     
   return 0;
}



