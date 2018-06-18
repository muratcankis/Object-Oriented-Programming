#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Dtarihi {
      int gun, ay, yil;
public:
       friend ostream & operator<<(ostream &, const Dtarihi &); 
       Dtarihi(int=0, int=0, int=0);
};

Dtarihi::Dtarihi(int g, int a, int y){
       gun = g;
       ay = a;
       yil = y;
}

ostream & operator<<(ostream &out, const Dtarihi &d){
        out << d.gun << "/" << d.ay << "/" << d.yil;
        return out;
}

class Ogrenci{
      string adi,soyadi;
      Dtarihi dgunu;
public:
       Ogrenci(string,string ,Dtarihi);
       void print(); 
       friend ostream & operator<<(ostream &, const Ogrenci &);      
      
};
Ogrenci::Ogrenci(string a,string s,Dtarihi d){
     adi=a;
     soyadi=s;
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





int main(int argc, char *argv[])
{   
    Dtarihi d(12,11,1985);
    cout << d <<endl;
    
    Ogrenci o1("Ahmet","UZUN", Dtarihi(11,10,1990));
    o1.print();
    cout<<o1;        
    system("PAUSE");
    return EXIT_SUCCESS;
}
