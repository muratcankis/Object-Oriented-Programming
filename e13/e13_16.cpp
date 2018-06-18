#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   char str[80];
   cout << "Enter your name: ";
   cin.getline(str, 79); 
   //cin >> str;
   cout << str << '\n';
   
   system("pause");                                     
   return 0;
}



