#include <iostream>
#include <vector> 
#include <ctime> 
using namespace std;

int main()
{
    
  vector<int> v;
  int r,size=10000;
  srand(time(NULL));
   for(int i=0;i<size;i++){
           bas: r=rand()%size;
           //cout << endl;
           for(int j=0;j<i;j++){
                  // cout << j << " "<< v[j] << "  ";
                   if (r==v[j]) goto bas;
                   }        
           v.push_back(r );
   }     
  // cout << endl;  
      
   for(int i=0;i<size;i++)
           cout << v[i] << "  ";  
   cout << endl;             
   for(int i=0;i<size;i++){
           r= rand()%(size-i);
           cout << i << ". sayý : " << v[r] << "   " << r << endl;
           v.erase(v.begin()+r);          
   }                   
   system("pause");
   return 0;
}
