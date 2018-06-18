#include <iostream>
using namespace std;


struct S{ 		// A structure
	int i1,i2; 		// made of two integers
};

int main(){
	S x; 		// x is of type S
	x.i1=12769; 		// fields of x are filled
	x.i2=2;
	unsigned char *xp; 	// A pointer to unsigned chars
	
	xp = reinterpret_cast<unsigned char *> (&x); 
					// reinterpretation
	for (int j=0; j<8; j++) 	// bytes of x on the screen
		cout << static_cast<int>(*xp++)<< endl;
		system("pause");
		return 0;
}
