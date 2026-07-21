#include "figureexception.h"

FigureException::FigureException(const std::string& what_arg)
    : std::domain_error(what_arg) {}
