// The sort algorithm uses the after function

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool sonra( const string &left, const string &right)
{
	return left > right;
}

int main()
{
    string words[]= 
        {"november", "kilo", "mike", "lima", 
            "oscar", "quebec", "papa"};
    sort(words, words +7, sonra);
    for(int i =0 ; i<7; i++) cout << words[i] << endl;
    system("PAUSE"); 
	return 0;
}
