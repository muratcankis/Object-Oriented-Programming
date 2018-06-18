#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{  
              
   fstream out("test7", ios::in | ios::out | ios::binary); // çýkýþ dosyasý oluþtur
   if(!out){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   out.seekp(3, ios::beg);
   out.put('$');
   out.close();
   
   system("pause");                                     
   return 0;
}



