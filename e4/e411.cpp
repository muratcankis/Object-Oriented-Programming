// e411.cpp
// nested objects , orders of constructors and destructors
#include <iostream>
using namespace std;

// The inner class 
class A{
 public:
	 A(){ cout << endl<< "Constructor A";}
	 ~A(){ cout << endl<< "Destructor A";}
};

// The enclosing class. Contains two objects of class A as members 
class B{
	 A m1,m2;    // Two member objects
 public:
	 B(){ cout << endl<< "Constructor B";}
	 ~B(){ cout << endl<< "Destructor B";}
};

// ----- Main Function -----
int main()
{
	{B b;}
	system("pause");
	return 0;
}
