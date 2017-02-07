#include "class_Virtual_shape.h"


void Virtual_shape::run()
{
    std::vector<Shape*> v;
    v.push_back(new Circle(Point(1, 2, 3), 7));
    v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
    v.push_back(new Circle(Point(4, 5, 6), 3));

    for (int i = 0; i < static_cast<int>(v.size()); ++i)
    {
        std::cout << *(v[i]) << std::endl;
    }

    std::cout << "The largest radius is: " << get_largest_radius(v) << '\n'; 
    for (auto shape : v)
    {
        delete shape;
    }
}

double Virtual_shape::get_largest_radius(std::vector<Shape*> v) const
{
    /* find the largest radius of circles from the vector, ignore triangles */

    double largest_radius{ 0.0 };
    double cur_radius;
    Circle* circle_ptr{ nullptr };

    for (auto shape : v)
    {
        // If dynamic_cast failed(shape is not a circle initially),
        //      will return nullptr. Thus we can skip triangles
        if (circle_ptr = dynamic_cast<Circle*>(shape))
        {
            cur_radius = circle_ptr->get_radius();
            largest_radius = cur_radius > largest_radius ? cur_radius : largest_radius;
        }
    }
    return largest_radius;
}