#include <iostream>
#include <algorithm> 			// must be included for algorithms
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main() {
	int* ptr;
	int aranan =44;
	ptr = find(arr, arr+8, aranan); 		// find first 33
	cout << "First object with value "<< aranan 
         << " found at offset " << (ptr-arr) << endl;
	system("pause");
	return 0;
}
