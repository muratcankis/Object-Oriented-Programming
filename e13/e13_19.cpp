#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{  
   char ch;
             
   ifstream in("test7", ios::in | ios::binary); // giriþ dosyasý oluþtur
   if(!in){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   in.seekg(3, ios::beg);
   
   while(!in.eof()){
      in.get(ch);
      cout << ch;                 
   }
   
   in.close();
   
   system("pause");                                     
   return 0;
}



