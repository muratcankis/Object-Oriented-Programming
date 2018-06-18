#include <iostream>
#include <fstream>
using namespace std;



int main()
{  
   char ch;
             
   ifstream in("test2"); // çýkýþ dosyasý oluþtur
   if(!in){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   
   while(!in.eof()){
      in.get(ch);
      // hatayý kontrol edin
      if (!in.good() && in.eof()){
         cout << "I/O Hata...terminating\n";
         system("pause");
         return 1;
      }
      cout << ch;                
   }

   in.close();
   
   system("pause");                                     
   return 0;
}

