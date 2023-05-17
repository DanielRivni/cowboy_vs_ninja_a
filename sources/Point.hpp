#ifndef POINT_H
#define POINT_H
namespace ariel
{
    class Point
    {
    private:
        double xPoint;
        double yPoint;

    public:
        Point(double xPoint, double yPoint);
        double distance(Point &other) const;
        void print() const;
        Point moveTowards(const Point &src, const Point &dest, double dist);
        double getXPoint() const;
        double getYPoint() const;
        void setXPoint(double xPoint);
        void setYPoint(double yPoint);
        bool operator==(const Point &other) const;
    };

}

#endif