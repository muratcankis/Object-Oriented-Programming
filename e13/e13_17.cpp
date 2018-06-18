#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{  
   char ch;             
   ofstream out("test6", ios::out | ios::binary); // çýkýþ dosyasý oluþtur
   if(!out){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   char str[80], *p;
   out << 123 << "this is a test" << 123;
   out << "Hello there!" << 99 << "sdf" << endl;
   out.close();
   
   ifstream in("test6", ios::out | ios::binary); // çýkýþ dosyasý oluþtur
   if(!in){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   do{
      p=str;
      ch=in.peek(); // Hangi tip karakterlerin bulunduðunu sapta
      if (isdigit(ch)){
         while(isdigit(*p=in.get())) p++;// tamsayý oku
         in.putback(*p); // akýþa karakter döndürür.
         *p='\n'; // boþ sonlu karakter
         cout << "Integer: " << atoi(str);
      }          
      else if (isalpha(ch)){
         while(isalpha(*p=in.get())) p++;// tamsayý oku
         in.putback(*p); // akýþa karakter döndürür.
         *p='\n'; // boþ sonlu karakter
         cout << "Katar: " << str;
      }             
      else in.get(); 
           cout << '\n';
   }while(!in.eof());
   
   in.close();
   
   
   
   system("pause");                                     
   return 0;
}



