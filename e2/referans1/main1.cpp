#include <cstdlib>
#include <iostream>

using namespace std;

void f(int &i, int &j){
   int gecici=i;
   i=j;
   j=gecici;
}

int main(int argc, char *argv[])
{
    int a=5,b=3;
    cout << "a = " << a << ",    b = " << b <<endl;
    f(a,b);
    cout << "a = " << a << ",    b = " << b <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
