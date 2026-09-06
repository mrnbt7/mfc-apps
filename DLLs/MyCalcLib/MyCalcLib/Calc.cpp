#include "pch.h"
#include "Calc.h"

#include <cmath>

// -------------------------
// Basic arithmetic
// -------------------------
double Calc::Add(double i, double j)
{
    return i + j;
}

double Calc::Substract(double i, double j)
{
    return i - j;
}

double Calc::Multiply(double i, double j)
{
    return i * j;
}

double Calc::Divide(double i, double j)
{
    return i / j;
}

// -------------------------
// Additional arithmetic
// -------------------------
double Calc::Modulo(double i, double j)
{
    if (j == 0.0)
        return NAN;

    return std::fmod(i, j);
}

double Calc::Power(double base, double exponent)
{
    return std::pow(base, exponent);
}

double Calc::Square(double value)
{
    return value * value;
}


double Calc::SquareRoot(double value)
{
    if (value < 0.0)
        return NAN;

    return std::sqrt(value);
}

double Calc::Cube(double value)
{
    return value * value * value;
}

double Calc::CubeRoot(double value)
{
    return std::cbrt(value);
}

double Calc::Negate(double value)
{
    return -value;
}

double Calc::Reciprocal(double value)
{
    if (value == 0.0)
        return NAN;

    return 1.0 / value;
}

double Calc::Percentage(double value, double percent)
{
    return value * percent / 100.0;
}

// -------------------------
// Logarithms
// -------------------------

double Calc::NaturalLog(double value)
{
    if (value <= 0.0)
        return NAN;

    return std::log(value);
}

double Calc::Log10(double value)
{
    if (value <= 0.0)
        return NAN;

    return std::log10(value);
}

double Calc::Exponential(double value)
{
    return std::exp(value);
}
