#pragma once

#ifdef CALCULATORSTATICMFCDLL_EXPORTS
#define CALCULATOR_API __declspec(dllexport)
#else
#define CALCULATOR_API __declspec(dllimport)
#endif

extern "C" CALCULATOR_API double Add(double a, double b);

extern "C" CALCULATOR_API double Subtract(double a, double b);

extern "C" CALCULATOR_API double Multiply(double a, double b);

extern "C" CALCULATOR_API double Divide(double a, double b);