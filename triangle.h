#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"
#include "figureexception.h"

class Triangle : public Figure {

public:
    Triangle(double aa, double bb, double cc, double AA, double BB, double CC);

    void print_info() override;

protected:
    double a, b, c;
    double A, B, C;

};
#endif // TRIANGLE_H
