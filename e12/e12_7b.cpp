#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main() {
	list<int> iList(10); 		// empty list holds 5 ints
	list<int>::iterator it; 	// iterator

	int data = 0; 		// fill list with data
	for(it = iList.begin(); it != iList.end(); it++)
	       cout <<	(*it = data += 2) << " ";
	it = find(iList.begin(), iList.end(), 8);	// look for number 8
   
	if( it != iList.end() ) {
        cout << "\nFound 8.\n";
        }
	else cout << "\nDid not find 8.\n"; 
	
	system("pause");
	return 0;
}
