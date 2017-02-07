#pragma once
#include "common_lib.h"


/* a pure virtual class as the base */
class Shape
{
public:
    // always add a virtual destructor for pure virtual classes
    // for destructors, don't use = 0, just leave an empty implementation
    virtual ~Shape() {};

    // operator<<: use a member function to generate output to make it virtual
    friend std::ostream& operator<< (std::ostream& out, const Shape& shape) { return shape.print(out); }
    virtual std::ostream& print(std::ostream& out) const = 0;
};