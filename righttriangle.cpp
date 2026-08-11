#include "righttriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90.0)
{
    if (C != 90) {
        throw FigureException("Угол C должен быть равен 90");
    }

    name = "Прямоугольный треугольник";
}
