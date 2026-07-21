#include "quadrangle.h"

Quadrangle::Quadrangle(double aa, double bb, double cc, double dd,
                       double AA, double BB, double CC, double DD)
    : a(aa), b(bb), c(cc), d(dd), A(AA), B(BB), C(CC), D(DD)
{
    name = "Четырёхугольник";
    sides_count = 4;
    if (A + B + C + D != 180.0) {
        throw FigureException("Сумма углов не равна 180");
    }
}

void Quadrangle::print_info()
{
    Figure::print_info();

    cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d
         << " Углы: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << ".\n" << endl;
}