#pragma once

#include "point.h"

void scalpel(coordinates& point_start, coordinates& point_end)
{
    std::cout << "The incision is made from point " << point_start.x << "," << point_start.y << " to point " << point_end.x << ", " << point_end.y << std::endl;
}

void hemostat (coordinates& point)
{
    std::cout << "Hemostat is applied at point " << point.x << "," << point.y << std::endl;
}

void tweezers (coordinates& point)
{
    std::cout << "Tweezers is applied at point " << point.x << "," << point.y << std::endl;
}

void suture (coordinates& point_start, coordinates& point_end)
{
    std::cout << "A seam has been applied from coordinates " << point_start.x << "," << point_start.y << " to " << point_end.x << "," << point_end.y << std::endl;
}
