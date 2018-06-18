#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream fout("test2o"); // çýkýþ dosyasý oluþtur
   ifstream fin("test2");   // giriþ dosyasý oluþtur
   if(!fout){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   if(!fin){
      cout << "cannot open input file.";
      return 1;                 
   }
   
   char ch;
   
   fin.unsetf(ios::skipws); // boþluklarý atlama
   
   while (!fin.eof()){
        fin >> ch;
        if (ch==' ') ch='|';
        if (!fin.eof()) {
                        fout << ch;
                        cout << ch;}
   }
   fin.close();
   fout.close();
   
   system("pause");                                     
   return 0;
}



