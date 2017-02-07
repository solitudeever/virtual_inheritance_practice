#include "class_Triangle.h"


std::ostream& Triangle::print(std::ostream& out) const
{
    out << "Triangle(" << m_point_a << ", "
        << m_point_b << ", "
        << m_point_c << ")";
    return out;
}