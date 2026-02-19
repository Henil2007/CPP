#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void calculateArea() {
        // base class function
    }
};

// Triangle class
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void calculateArea() {
        cout << "Area of Triangle = " << (0.5 * base * height) << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
protected:
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void calculateArea() {
        cout << "Area of Rectangle = " << (length * breadth) << endl;
    }
};

// Square class (inherits Rectangle)
class Square : public Rectangle {
public:
    Square(float l) : Rectangle(l, l) {}

    void calculateArea() {
        cout << "Area of Square = " << (length * length) << endl;
    }
};

int main() {
    Triangle t(10, 5);
    Rectangle r(8, 4);
    Square s(6);

    t.calculateArea();
    r.calculateArea();
    s.calculateArea();

    return 0;
}