#include "09_point_triangle.h"
# include <cmath>

void Point::translate(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

double Point::distance(Point& other)
{
    return sqrt(pow((this->x - other.x), 2 ) + pow((this->y - other.y), 2 ));
}




Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
    points[0] = Point(x1, y1);
    points[1] = Point(x2, y2);
    points[2] = Point(x3, y3);
}


Triangle::Triangle(Point p1, Point p2, Point p3)
{
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
}


void Triangle::translate(double dx, double dy)
{
    for(auto p : points)
        p.translate(dx, dy);
}

double Triangle::circumference()
{
    double p01 = points[0].distance(points[1]);
    double p02 = points[0].distance(points[2]);
    double p12 = points[1].distance(points[2]);

    return p01 + p02 + p12;
}
