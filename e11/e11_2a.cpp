#include <iostream>
using namespace std;

template<class atype>
int find(const atype* array, atype value, int size){
for(int i=0; i<size; i++)
if (array[i]==value) return i;

return -1;
}

char chrArr[]={'s','r','g','y','h','v','q2'};
char ch='h';
int intArr[]={3,5,16,14,26,13,21,22};
int in=13;
double duArr[]={1.0,3.2,4.2,-1.4,6.7};
double db=4.2;

int main(){
	cout << "\n 'h' in chrArr: index="<< find(chrArr, ch, 7)<<endl;
	cout << "\n 13 in chrArr: index=" << find(intArr, in, 8)<<endl;
	cout << "\n 4.2 in chrArr: index="<< find(duArr, db, 5)<<endl;
	system ("Pause");
    return 0;
}
