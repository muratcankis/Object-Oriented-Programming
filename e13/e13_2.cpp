#include <iostream>

using namespace std;

int main() {
    
    cout.unsetf(ios::dec);
    cout.setf(ios::uppercase | ios::showbase | ios::hex);
    
    cout << "Merhaba Dunya " << 88 << "\n";
    cout << 1.0e-05<< "\n";
    
    cout.unsetf(ios::uppercase);
    cout << 88 << "\n";
    cout << 1.0E-05<< "\n";
    system("pause");
	return 0;
}
