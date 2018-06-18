#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream out("test1"); // çýkýþ dosyasý oluþtur
   
   if(!out.is_open()){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   char str[80];
   cout << "Write katars to disk, '$' to stop.\n" << endl;
   
   do{
        cout << ": ";
        cin >> str;
        out << str << endl; 
   } while (*str != '$');
   
   out.close();
   
   system("pause");                                     
   return 0;
}



