//Return by refference

#include <iostream>

// max  function returns a refference to the largest element of an array
int &  max(int a[], int length)			
{
   int i=0;    								// i is indices of the largest element
   for (int j=0 ; j<length ; j++)	
	if (a[j] > a[i])  i = j;
	return a[i];								// returns refference to a[i]
}

int main()
{
   int array[] = {12, -54 , 0 , 123, 63};	// An aray with 5 elements
  max(array,5) = 22;								// Write 0 on the largest element
   for(int i=0; i<5; i++) 
           std::cout << array[i] << " ";       // array on the screen
   std::cout << std::endl;
   max(array,5) = 44;								// Write 0 on the largest element
   for(int i=0; i<5; i++) 
           std::cout << array[i] << " ";       // array on the screen
   system("pause");
   return 0;
}

