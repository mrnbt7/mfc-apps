#include "pch.h"
#include "calc.h"

double Add(double a, double b)
{
    return a + b;
}

double Subtract(double a, double b)
{
    return a - b;
}

double Multiply(double a, double b)
{
    return a * b;
}

double Divide(double a, double b)
{
    if (b == 0.0)
        return 0.0;

    return a / b;
}