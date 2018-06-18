#include <iostream>
using namespace std;


int main()
{
  int n;
  int * p;
  cout << "Boyut girin : ";
  cin >> n;
  p= new int[n];
  for (int i=0; i<n;i++ )
  p[i]=2*i+1;
  
  
  
  for (int i=0; i<n;i++ )
  cout << (i+1) << ".  " << p[i]<< endl;

  
 
  
  
  
  
  
  system("pause");
  return 0;
}

