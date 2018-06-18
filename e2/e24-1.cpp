#include <iostream>
using namespace std;


int main()
{
   int i=5;
    cout << "i = " << i <<endl;
    cout << "i = " << (i/2.) <<endl;
   float f;
   f= static_cast<float>(i)/2;
   cout << "f = " << f <<endl;
   system("pause");
   return 0;
}

