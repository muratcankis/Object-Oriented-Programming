#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream fout("test2o"); // ��k�� dosyas� olu�tur
   ifstream fin("test2");   // giri� dosyas� olu�tur
   if(!fout){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   if(!fin){
      cout << "cannot open input file.";
      return 1;                 
   }
   
   char ch;
   
   fin.unsetf(ios::skipws); // bo�luklar� atlama
   
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



