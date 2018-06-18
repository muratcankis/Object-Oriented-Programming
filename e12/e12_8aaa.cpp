// Simple shapes with STL
// from Bruce Eckel Thinking in C++ Vol 2.
#include <vector>
#include <iostream>
using namespace std;

class Shape {
public:
  virtual void draw() = 0;
  virtual ~Shape() {};
};

class Circle : public Shape {
public:
  void draw() { cout << "Circle::draw\n"; }
  ~Circle() { cout << "~Circle\n"; }
};

class Triangle : public Shape {
public:
  void draw() { cout << "Triangle::draw\n"; }
  ~Triangle() { cout << "~Triangle\n"; }
};

class Square : public Shape {
public:
  void draw() { cout << "Square::draw\n"; }
  ~Square() { cout << "~Square\n"; }
};


int main() {
  vector<Shape*> shapes;
  vector<Shape*> ::iterator i,j;
  
  shapes.push_back(new Circle);
  shapes.push_back(new Square);
  shapes.push_back(new Triangle);
  for(i = shapes.begin(); i != shapes.end(); i++)
    (*i)->draw();
  
  for(j = shapes.begin(); j != shapes.end(); j++)
     delete *j;
 
  system("pause");
  return 0;
}
