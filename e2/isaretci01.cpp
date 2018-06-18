#include <iostream>
using namespace std;


int main()
{
  int * p=0;
  cout << p << endl;
  
  int a=5;
  p=&a;
  cout << p << endl;
  cout << &a << endl;
  cout << *p << endl;
  *p=16;
  cout << a << endl;
  
  cout << &p << endl;
  
  
  system("pause");
  return 0;
}

