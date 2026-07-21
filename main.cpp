#include <Windows.h>

#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "quadrangle.h"
#include "rectanglee.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

using namespace std;

void print_info(Figure* fig) {
    fig->print_info();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        Triangle tri(10, 20, 30, 50, 60, 70);
        tri.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        RightTriangle rt(10, 20, 30, 50, 60);
        rt.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        IsoscelesTriangle iso(10, 20, 50, 60);
        iso.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        EquilateralTriangle eq(30);
        eq.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
        quad.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Rectanglee rect(10, 20);
        rect.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }
    try {
        Square sq(20);
        sq.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Parallelogram par(20, 30, 30, 40);
        par.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Rhombus rhomb(30, 30, 40);
        rhomb.print_info();
    } catch (const FigureException& e) {
        cout << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    return 0;
}
