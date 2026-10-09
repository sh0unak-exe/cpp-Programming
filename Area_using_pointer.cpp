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
    cout << "Area of Rectangle = " << l * b << endl;
    }
  };
  class Square : public Shape {
public:
  int s;
  Square(int x) {
    s = x;
  }
  void area() override {
    cout << "Area of Square = " << s * s << endl;
    }
  };
  class Circle : public Shape {
public:
 float r;
  Circle(float x) {
    r = x;
  }
  void area() override {
    cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
  };
  int main() {
    Rectangle R(10, 20);
    Square S(5);
    Circle C(7);
    Shape *ptr;
    ptr = &R;
    ptr->area();
    ptr = &S;
    ptr->area();
    ptr = &C;
    ptr->area();
    return 0;
  }
    
