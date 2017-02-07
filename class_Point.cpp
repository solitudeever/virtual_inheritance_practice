#include "class_Point.h"


std::ostream& Point::print(std::ostream& out) const
{
    out << "Point(" << m_x << ", " << m_y << ", " << m_z << ")";
    return out;
}