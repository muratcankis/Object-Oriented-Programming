#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

int main() { 
	string words[]= {"november", "kilo", "mike", "lima", "oscar", "quebec", "papa"};
	sort(words, words +7, greater<string>()); // greater () is a function object
	for(int i =0 ; i<7; i++) cout << words[i] << endl;
	system("PAUSE"); 
	return 0;
} 
