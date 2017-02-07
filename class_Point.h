#pragma once
#include "class_Shape.h"


// Use virtual here, inherit Shape as a virtual base class
//      to only have one copy of Shape in case of diamond inheritance
class Point : virtual public Shape
{
private:
    double m_x;
    double m_y;
    double m_z;
public:
    Point(double x, double y, double z):
        m_x(x), m_y(y), m_z(z)
    {}

    virtual std::ostream& print(std::ostream& out) const override;
};