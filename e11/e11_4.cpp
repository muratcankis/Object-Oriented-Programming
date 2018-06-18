#include<iostream>
using namespace std;

template <class T>
void bubleSort(T * a, int arraySize) {
	T hold;
	for (int pass=0; pass < arraySize-1; pass++) {
		for(int i=0; i<arraySize-1; i++) {
			if (a[i] > a[i+1]) { // comparison
				hold = a[ i ];
				a[i]= a[i+1];
				a[i+1] = hold;
			} // end if
		}
	}  
} 

template<class T>
int linearSearch( const T *array, T key, int arraySize ) {
	for (int n=0; n < arraySize; n++)
		if (array[n] == key ) return n;
	return -1;
}

int main(){    
    int a[]={1,32,5,3,6,7,5,7,8,9,5};
    int size=sizeof(a)/sizeof(int);
	
    cout << "Sýralamadan önce \n";
    for(int i=0; i<size;i++ )
    cout << "a["<< i <<"] =" << a[i] << endl; 
    
    bubleSort(a,size);
    
    cout << "Sýraladýktan sonra \n";
    for(int i=0; i<size;i++ )
    cout << "a["<< i <<"] =" << a[i] << endl; 
    
    int bulunacak;
    cout << "Aradýðýnýz tamsayý deðerini giriniz : ";
    cin >> bulunacak;
    int k=linearSearch(a, bulunacak, size);
    if (k>=0) 
    cout << "\n aranan deðer "<< k << " indeksinde";
    else
    cout << "aranan deðer bulunamadý";
    
    system("pause");
	return 0;
    
}
