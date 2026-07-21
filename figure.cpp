#include "figure.h"

Figure::Figure() : name("Фигура"),
    sides_count(0) {}

void Figure::print_info()
{
    cout << name << ": \n";
}
