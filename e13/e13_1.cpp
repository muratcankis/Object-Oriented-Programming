#include <iostream>

using namespace std;

int main() {
    // Þýkýþ varsayýlan deðerlerle gösterilecek
    cout<< 123.23 << " merhaba " << 100 << "\n";
    cout<< 10 << " " << -10 << "\n";
    cout<< 100.000 << "\n\n";
    
    // Þimdi formatlar deðiþtiriliyor
    cout.unsetf(ios::dec);
    cout.setf(ios::scientific | ios::hex );
    
    cout<< 123.23 << " merhaba " << 100 << "\n";
    
    cout.unsetf(ios::hex );
    cout.setf(ios::showpos);
    cout<< 10 << " " << -10 << "\n";
    
    cout.setf(ios::showpoint | ios::fixed);
    cout<< 100.0<<endl;
    
    cout.unsetf(ios::fixed);
    cout.setf(ios::showpoint | ios::scientific);
    cout<< 100.0<<endl;
    
    system("pause");
	return 0;
}
