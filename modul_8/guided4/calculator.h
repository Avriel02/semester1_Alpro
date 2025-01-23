#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    static double addition(double a, double b);
    static double subtraction(double a, double b);
    static double multiplication(double a, double b);
    static double division(double a, double b);
    static int modulus(int a, int b);
    static double power(double base, double exponent);
    static double squareRoot(double num);
};

#endif
