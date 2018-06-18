#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ifstream fin("test4", ios::in | ios::binary); // çýkýþ dosyasý oluþtur
   if(!fin){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   double num;
   char str[80];
   
   fin.read((char*)&num, sizeof(double));
   fin.read(str,14);
   //str[14]='\0'; // boþ sonlu str
   cout << num << ' ' << str << endl;
   fin.close();
   
   system("pause");                                     
   return 0;
}



