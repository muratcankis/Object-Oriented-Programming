#include <cstdlib>
#include <iostream>

using namespace std;

void f(int &j){
    j=j*j/2;
}

int main(int argc, char *argv[])
{
    int i=5;
    f(i);
    cout << "i= " << i << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
