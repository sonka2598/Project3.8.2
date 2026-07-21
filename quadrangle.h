#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "figure.h"
#include "figureexception.h"


class Quadrangle : public Figure {

public:
    Quadrangle(double aa, double bb, double cc, double dd,
               double AA, double BB, double CC, double DD);

    void print_info() override;

protected:
    double a, b, c, d;
    double A, B, C, D;

};

#endif // QUADRANGLE_H
