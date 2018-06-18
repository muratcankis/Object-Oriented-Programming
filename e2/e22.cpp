// Using the cin and cout objects
#include<iostream>
using namespace std;				// we don't need std:: anymore

int main() {
   int i,j;								// Two integers are defined
   cout << "Give two numbers \n";	// Message to screen, cursor moves to the newline
   cin >> i >> j;							// Read i and j from the keyboard
   cout << "Sum= " << i + j << "\n";	// The sum of the numbers to the screen
   system("pause");
   return 0;	
}
