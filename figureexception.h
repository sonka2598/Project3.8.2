#ifndef FIGUREEXCEPTION_H
#define FIGUREEXCEPTION_H

#include <stdexcept>


class FigureException : public std::domain_error
{
public:
    explicit FigureException(const std::string& what_arg);
};

#endif // FIGUREEXCEPTION_H
