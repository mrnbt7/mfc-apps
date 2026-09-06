#pragma once

#include <afx.h>

class AFX_EXT_CLASS Calc
{

public:
    double Add(double i, double j);
    double Substract(double i, double j);
    double Multiply(double i, double j);
    double Divide(double i, double j);

    double Modulo(double i, double j);
    double Percentage(double value, double percent);
    double Power(double base, double exponent);
    double Square(double value);

    double SquareRoot(double value);
    double Cube(double value);
    double CubeRoot(double value);
    double Negate(double value);    
    
    double Reciprocal(double value);
    double NaturalLog(double value);
    double Log10(double value);
    double Exponential(double value);

};

