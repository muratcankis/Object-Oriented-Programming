#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

bool after( const int &left, const int &right)
{
	return left > right;
}

int main() { 
	int words[]= {11, 4, 6 , 1, 56, 33, 22};
	sort(words, words +7,after); // greater () is a function object
	for(int i =0 ; i<7; i++) cout << words[i] << endl;
	system("PAUSE"); 
	return 0;
} 
