#include <iostream>
#include <iomanip>
using namespace std;

int main()
{              
   cout << hex << 100 << endl;
   cout << oct << 10 << endl;
   cout << dec << 10 << endl;
   
   cout << setfill('.') << setw(10);
   cout << 100 << setw(10) << " selam" << endl;
   
   system("pause");                                     
   return 0;
}



