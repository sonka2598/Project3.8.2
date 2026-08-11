#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A)
{
    if (a != c || A != C) {
        throw FigureException("Треугольник не равнобедренный");
    }

    name = "Равнобедренный треугольник";
}
