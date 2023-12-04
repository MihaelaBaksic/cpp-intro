#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14

class Shape {
private:
    double x;
    double y;

public:
    Shape(): x {.0}, y {.0} {}
    Shape(double x, double y): x {x}, y {y} {}

    virtual void translate(double delta_x, double delta_y) {
        x += delta_x;
        y += delta_y;
    }

    virtual double area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(): Shape(), radius {.0} {}
    Circle(double x, double y, double radius): Shape(x, y), radius {radius} {}
    Circle(double radius): Shape(), radius {radius} {}

    double area() {
        return pow(radius, 2.0) * PI;
    }

    void draw() {
        cout << "Circle" << endl;
    }
};

class Square: public Shape{
private:
    double side;
    double angle;

public:
    Square(): Shape(), side {.0}, angle {.0} {}
    Square(double x, double y, double side = 10, double angle = 0): Shape(x, y), side {side}, angle {angle} {
        if (angle < 0 || angle > 90) throw new exception;
    }

    double area(){
        return side * side;

    }

    void draw(){
        cout << "Square" << endl;
    }
    


};

class Triangle : public Shape {
private:
    double base, side, angle;
public:
    Triangle() : Shape(), base{.0}, side{.0}, angle{.0} {}
    Triangle(double x, double y, double base, double side, double angle = 0) : Shape(x,y), base{base}, side{side}, angle{angle} {
        if (angle < 0 || angle > 360) throw new exception;
    } 
    double area() {
        double h = sqrt(pow(side,2) - pow(base/2,2));
        return h * base/2;
    }

    void draw() {
        cout << "Triangle" << endl;
    }
};

int main() {
    Triangle triangle = Triangle(100, 50, 60, 80, 15);
    cout << triangle.area() << endl;
    return 0;
}