#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[ ] = { 2, 4, 6, 8 }; 			// array of ints
    const vector<int> v1(arr, arr+4); 	// vector initialized to array
    vector<int>::iterator it; 		// constant iterator to vector-of-ints
    for(it = v1.begin(); it != v1.end(); it++) cout << *it << ' ';
    
    system("pause");
    return 0;
}
