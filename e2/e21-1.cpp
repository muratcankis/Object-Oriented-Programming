#include<iostream>		// Header file for the cout object
using namespace std;

int y=0;
int x=1;

void f(){
     int x=5;
     ::x++;
     cout << "x = " << x << endl;
     y++;     
     cout << "y = " << y << endl;
}

int main() {
    cout << "x = " << x << endl;
  f();
  cout << "x = " << x << endl;
  system("pause");
   return 0;	
}
