#include <cstdlib>
#include <iostream>

using namespace std;


class sekil{
      int x,y;
public:
       sekil(int=0,int=0);
       virtual void yaz();
      
      
      };
sekil::sekil(int x, int y){
       this->x=x;
       this->y=y;
                           
}
void sekil::yaz(){
     cout<<"x= "<<x<<", y= "<<y<< endl;
}                    

class dogru:public sekil{
      int x1,y1;
public:
       dogru(int,int,int,int);
      virtual void yaz();
};

dogru::dogru(int i_x,int i_y,int i_x1,int i_y1):sekil(i_x,i_y){                 
             x1=i_x1;
             y1=i_y1;  
}
void dogru::yaz(){
     cout<<"dogru sinifi:\n";
     sekil::yaz();
     cout<<"x1= "<<x1<<", y1= "<<y1<< endl;
     
     }
 
class ucgen: public dogru{
      int x2,y2;
  public:
         ucgen(int,int,int,int,int,int);
   virtual void yaz();
   
};     

ucgen::ucgen(int i_x,int i_y,int i_x1,int i_y1,int i_x2,int i_y2):
                 dogru(i_x,i_y,i_x1,i_y1){                 
             x2=i_x2;
             y2=i_y2;  
}

void ucgen::yaz(){
     cout<<"ucgen sinifi:\n";
     dogru::yaz();
     cout<<"x2= "<<x2<<", y2= "<<y2<< endl;
     
     }

class dikdortgen: public sekil{
    int x1,y1 ;
public:
    dikdortgen(int,int,int,int);
    virtual void yaz(); 
};
dikdortgen::dikdortgen(int i_x,int i_y,int i_x1,int i_y1):sekil(i_x,i_y){
    x1=i_x1;                       
    y1=i_y1;                                                 
}
void dikdortgen::yaz(){
    cout<<"dikdortgen sinifi:\n";
    sekil::yaz();
    cout<<"x1= "<<x1<<", y1= "<<y1<< endl;
}

void goster(sekil &s){
    s.yaz();     

}



int main(int argc, char *argv[])
{
    sekil s1(10,11);
    dogru d1(5,5,15,15);
    ucgen u1(1,1,3,3,6,6);
    dikdortgen d2(4,4,7,7);
    
    goster(s1);
    goster(d1);
    goster(u1);
    goster(d2);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
