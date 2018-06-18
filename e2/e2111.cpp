#include<iostream>		// Header file for the cout object
using namespace std;

struct S{ 		// A structure
	int i1,i2; 		// made of two integers
};

int main(){
	int *ip;
	ip= new int(5);
	
	
	cout << *ip << endl;
   system("pause");
   return 0;
}
