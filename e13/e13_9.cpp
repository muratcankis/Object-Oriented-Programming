#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream fout("test"); // çýkýþ dosyasý oluþtur
   
   if(!fout){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   fout << "Hello!\n";
   fout << 100 << ' ' << hex << 100 << endl;
   
   fout.close();
   
   ifstream oku("test");
   
   if(!oku){
      cout << "cannot open input file.";
      return 1;                 
   }
   char str[80];
   int i,j;
   
   oku >> str >> i >> j;
   cout << str << ' ' << i << ' ' << j << endl;
   oku.close();
   
   system("pause");                                     
   return 0;
}



