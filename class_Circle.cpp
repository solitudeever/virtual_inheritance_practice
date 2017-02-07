#include "class_Circle.h"


std::ostream& Circle::print(std::ostream& out) const
{
    out << "Circle(" << m_centre << ", radius " << m_radius << ")";
    return out;
}