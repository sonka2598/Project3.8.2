#include "parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrangle(a, b, a, b, A, B, A, B)
{
    if (A + B != 180.0) {
        throw FigureException("Это не параллелограмм.");
    }

    name = "Параллелограмм";
}
