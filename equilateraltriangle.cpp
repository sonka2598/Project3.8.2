#include "equilateraltriangle.h"

EquilateralTriangle::EquilateralTriangle(double a)
    : Triangle(a, a, a, 60.0, 60.0, 60.0)
{
    name = "Равносторонний треугольник";
}