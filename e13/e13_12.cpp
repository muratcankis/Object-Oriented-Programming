#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ifstream fin("test2", ios::in | ios::binary); // giriþ dosyasý oluþtur
   if(!fin){
      cout << "cannot open inputput file.";
      return 1;                 
   }
   char ch;
   
   while (!fin.eof()){
        fin.get(ch);
        cout << ch;
   }
   fin.close();
   
   system("pause");                                     
   return 0;
}



