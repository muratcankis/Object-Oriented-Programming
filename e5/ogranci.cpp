#include <cstdlib>
#include <iostream>

using namespace std;

class Dtarihi {
      int gun, ay, yil;
public:
       friend ostream & operator<<(ostream &, const Dtarihi &); 
       Dtarihi(int=0, int=0, int=0);
};



class Ogrenci{
      char *adi,*soyadi;
      Dtarihi dgunu;
public:
       Ogrenci(char *,char *,Dtarihi);
       void print(); 
       friend ostream & operator<<(ostream &, const Ogrenci &);      
      
};
Ogrenci::Ogrenci(char *a,char *s,Dtarihi d){
     adi=new char[strlen(a)+1];
     strcpy(adi,a);
    
     soyadi=new char[strlen(s)+1];
     strcpy(soyadi,s);
     
     dgunu=d;  
}  
         
void Ogrenci::print (){
     cout<<"adi: "<<adi<<endl
      <<"soyadi: "<<soyadi<<endl
      <<"Dtarihi: "<<dgunu<<endl;   
}    
  
ostream & operator<<(ostream &out, const Ogrenci &o) 
{
   out <<"adi: "<<o.adi<<endl
       <<"soyadi: "<<o.soyadi<<endl
       <<"Dtarihi: "<<o.dgunu<<endl;  

   return out;
} 



Dtarihi::Dtarihi(int g, int a, int y){
       gun = g;
       ay = a;
       yil = y;
}

ostream & operator<<(ostream &out, const Dtarihi &d){
        out << d.gun << "/" << d.ay << "/" << d.yil;
        return out;
}

int main(int argc, char *argv[])
{   
    //Dtarihi d(12,11,1985);
    Ogrenci o1("Ahmet","UZUN", Dtarihi(11,10,1990));
    o1.print();
    cout<<o1;        
    system("PAUSE");
    return EXIT_SUCCESS;
}
