#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <iostream>

using namespace std;

class Figure
{   
public:
    Figure();
    virtual void print_info();

protected:
    string name;
    int sides_count;
};
#endif // FIGURE_H
