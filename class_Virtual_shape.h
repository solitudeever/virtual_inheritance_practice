#pragma once
#include "common_lib.h"
#include "class_Shape.h"
#include "class_Point.h"
#include "class_Triangle.h"
#include "class_Circle.h"


// the main code holder class
class Virtual_shape
{
public:
    void run();
    double get_largest_radius(std::vector<Shape*> v) const;
};