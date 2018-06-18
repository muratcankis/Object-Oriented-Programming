#include <cstdlib>
#include <iostream>

using namespace std;

class C{
		const int CI; 		// constant data member
		int x; 			// nonconstant data member
	public:
		C() : CI(10) 		// initial value of CI is zero
			{ x = -2; }
        
        C( int a ) : CI(0), x (a)
			{ } 			// Empty body
			
        int get_CI();
};

int C::get_CI(){
    return CI;    
}

int main(int argc, char *argv[])
{
    
    C c1;
    cout << c1.get_CI() << endl;
    
    C c2(20);
    cout << c2.get_CI() << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
