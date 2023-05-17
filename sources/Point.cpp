#include "Point.hpp"
using namespace ariel;

Point::Point(double xPoint, double yPoint) {}
double Point::distance(Point &point) const
{
    return 0.0;
}

void Point::print() const {}

Point Point::moveTowards(const Point &src, const Point &dest, double dist)
{
    return Point(0, 0);
}
double Point::getXPoint() const
{
    return xPoint;
}

double Point::getYPoint() const
{
    return yPoint;
}

void Point::setXPoint(double xPoint)
{
    this->xPoint = xPoint;
}

void Point::setYPoint(double yPoint)
{
    this->yPoint = yPoint;
}
bool Point::operator==(const Point &other) const
{
    return true;
}