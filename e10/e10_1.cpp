//   Example1 for Exceptions

#include <iostream>
using namespace std;

float fraction(int num, int denom)
{
	if(denom==0) throw "Divided by zero";
	return static_cast<float>(num)/denom;
}

int main()
{
	int numerator,denominator;
	cout << endl << "Enter the numerator ";
	cin >> numerator;
	cout << endl << "Enter the denominator ";
	cin >> denominator;
	try{
		cout << fraction(numerator,denominator);
		
	}
	catch (const char* result){
		cout << endl << result;
	}
	
	cout << endl << "End of Program";
	system("pause");
	return 0;
}
