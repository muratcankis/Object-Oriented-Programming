#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream fout("test4", ios::out | ios::binary); // çýkýþ dosyasý oluþtur
   if(!fout){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   double num=100.45;
   char str[]="This is a test";
   
   fout.write ((char*)&num, sizeof(double));
   fout.write(str,strlen(str));
   
   fout.close();
   
   system("pause");                                     
   return 0;
}



