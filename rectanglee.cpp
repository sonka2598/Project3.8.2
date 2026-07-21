#include "rectanglee.h"

Rectanglee::Rectanglee(double a, double b)
    : Quadrangle(a, b, a, b, 90.0, 90.0, 90.0, 90.0)
{
    name = "Прямоугольник";
}