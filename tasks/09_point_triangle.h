#include<iostream>

class Point
{
private:
    double x, y = 0.0;
public:
    Point() {}
    Point(double x, double y): x{x}, y{y} {}

    void translate(double dx, double dy);

    double distance(Point& other);

};


class Triangle
{
private:
    Point points[3];

public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
    Triangle(Point p1, Point p2, Point p3);

    void translate(double dx, double dy);
    double circumference();
};