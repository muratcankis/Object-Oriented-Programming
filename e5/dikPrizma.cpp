#include <cstdlib>
#include <iostream>

using namespace std;

class dikPrizm{
      int en, boy, yukseklik;      
public:
      dikPrizm(int=0,int=0,int=0); 
      int hacim();
      void print();
};
           
dikPrizm::dikPrizm(int en, int boy, int yukseklik){
      this->en=en;
      this->boy=boy;
      this->yukseklik=yukseklik;
}

int dikPrizm::hacim(){
    return en*boy*yukseklik;
}
void dikPrizm::print(){
cout<<"en: "<<en<<endl;
cout<<"boy: "<<boy<<endl;     
cout<<"yukseklik: "<<yukseklik<<endl;
cout<<"hacim: "<<hacim()<<endl;     
}

int main(int argc, char *argv[])
{
    
    dikPrizm d1(3,5,7);
    d1.print();
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
