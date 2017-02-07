#pragma once
#include "common_lib.h"
#include "class_Shape.h"
#include "class_Point.h"


class Circle : virtual public Shape
{
private:
    Point m_centre;
    double m_radius;
public:
    Circle(const Point &centre, double radius):
        m_centre(centre), m_radius(radius)
    {}

    double get_radius() const { return m_radius; }
    virtual std::ostream& print(std::ostream& out) const override;
};