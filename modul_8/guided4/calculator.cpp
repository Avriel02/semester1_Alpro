#include "calculator.h"
#include <cmath>

double Calculator::addition(double a, double b) {
    return a + b;
}

double Calculator::subtraction(double a, double b) {
    return a - b;
}

double Calculator::multiplication(double a, double b) {
    return a * b;
}

double Calculator::division(double a, double b) {
    if (b == 0) {

        return NAN;
    }
    return a / b;
}

int Calculator::modulus(int a, int b) {
    return a % b;
}

double Calculator::power(double base, double exponent) {
    return pow(base, exponent);
}

double Calculator::squareRoot(double num) {
    return sqrt(num);
}
