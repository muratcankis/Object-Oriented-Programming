#include <cstdlib>
#include <iostream>

using namespace std;



class Point{
  public:   
     int x,y;
  
     void setPoint(int,int);    
     void move(int a, int b){
         x=a;
         y=b;     
     }; 
     void print();            
};

void Point::setPoint(int a, int b){
     x=a;
     y=b;
     print();
}

void Point::print(){
     cout << "(" << x <<", " << y <<")" << endl;
}

int main(int argc, char *argv[])
{
    Point p1,p2;
    

    //p1.x=5;
    // p1.y=5;
    p1.setPoint(5,0);
    
    p1.print();
    
    p1.move(10,10);
    p1.print();
    
    
    p2.setPoint(20,15);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
