#include <iostream>
#include <fstream>
using namespace std;

int main()
{              
   ofstream fout("test5", ios::out | ios::binary); // çýkýþ dosyasý oluþtur
   if(!fout){
      cout << "cannot open output file.";
      return 1;                 
   }
   
   double nums[4]={1.1, 2.2, 3.3, 4.4};

   
   fout.write((char*) nums, sizeof(nums));
   fout.close();
   
   
   ifstream fin("test5", ios::in | ios::binary); // çýkýþ dosyasý oluþtur
   if(!fin){
      cout << "cannot open output file.";
      return 1;                 
   }
   fin.read((char*) nums, sizeof(nums));
   
   int i;
   for(i=0; i<4; i++)
            cout << nums[i] << ' ';
   cout << '\n';
   
   cout << fin.gcount() << " characters read.\n";         
            
   fin.close();
   
   system("pause");                                     
   return 0;
}



