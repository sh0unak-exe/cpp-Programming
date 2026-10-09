#include <iostream>
using namespace std;
class Shape {
public:
  virtual void area() = 0;
};
class Rectangle : public Shape {
public:
  int l, b;
  Rectangle(int x, int y) {
    l = x;
    b = y;
  }
  void area() override {
    cout << "Rectangle Area = "<< l * b << endl;
  }
};
class Square : public Shape {
public:
  int s;
 Square(int x) {
    
  }
  void area() override {
    cout << "Area of Square = "<< s * s << endl;
  }
};
class Circle : public Shape {
public:
  int r;
 Circle(float x) {
   r= x; 
  }
  void area() override {
    cout << "Area of Circle= "<< 3.14 * r * r << endl;
  }
};
int main() {
  Rectangle R(10, 20);
  Square S(5);
  Circle C(7);
  R.area();
  R.area();
  C.area();
  return 0;
}
