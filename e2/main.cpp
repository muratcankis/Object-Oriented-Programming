#include <cstdlib>
#include <iostream>

using namespace std;

void f(const int  & x, int & y){
    int tmp;
    tmp =x;
    x=y;
    y=tmp;
    
    }
int main(int argc, char *argv[])
{
    
    int a=15, b=20;
    f(a,b);
    cout << " Ana programýn içerisinde" <<endl;
    cout << a <<", "<< b <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
