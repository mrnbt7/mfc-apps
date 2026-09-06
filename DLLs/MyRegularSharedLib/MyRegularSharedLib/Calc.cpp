#include "pch.h"
#include "Calc.h"

double Add(double a, double b)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    return a + b;
}

double Subtract(double a, double b)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    return a - b;
}

double Multiply(double a, double b)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    return a * b;
}

double Divide(double a, double b)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    if (b == 0.0)
        return 0.0;

    return a / b;
}