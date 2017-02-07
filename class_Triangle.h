#pragma once
#include "common_lib.h"
#include "class_Shape.h"
#include "class_Point.h"


class Triangle : virtual public Shape
{
private:
    Point m_point_a;
    Point m_point_b;
    Point m_point_c;
public:
    Triangle(const Point &a, const Point &b, const Point &c) :
        m_point_a(a), m_point_b(b), m_point_c(c)
    {}

    virtual std::ostream& print(std::ostream& out) const override;
};