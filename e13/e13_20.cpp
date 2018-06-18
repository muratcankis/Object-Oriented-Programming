#include <iostream>
#include <fstream>
using namespace std;

void checkstatus(ifstream &in);

int main()
{  
   char c;
             
   ifstream in("test2"); // çýkýþ dosyasý oluþtur
   if(!in){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   
   while(in.get(c)){
      cout << c;  
      checkstatus(in);               
   }
   
   checkstatus(in); 
   in.close();
   
   system("pause");                                     
   return 0;
}


void checkstatus(ifstream &in){
   ios::iostate i;
   i=in.rdstate();
   if(i & ios::eofbit)
        cout << "EOF encountered\n";
   else if (i & ios::failbit)
        cout << "Non-Fatal I/O hatasý\n";
   else if (i & ios::badbit)
        cout << "Fatal I/O hata\n";  
     
}
