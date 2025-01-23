#include <iostream>
#include "calculator.h"

int main() {
    double num1, num2;
    std::cout << "Masukkan dua bilangan: ";
    std::cin >> num1 >> num2;

    std::cout << "Hasil penjumlahan: " << Calculator::addition(num1, num2) << std::endl;
    std::cout << "Hasil pengurangan: " << Calculator::subtraction(num1, num2) << std::endl;
    std::cout << "Hasil perkalian: " << Calculator::multiplication(num1, num2) << std::endl;
    std::cout << "Hasil pembagian: " << Calculator::division(num1, num2) << std::endl;
    std::cout << "Sisa hasil bagi: " << Calculator::modulus(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
    std::cout << "Hasil pangkat: " << Calculator::power(num1, num2) << std::endl;
    std::cout << "Akar kuadrat bilangan pertama: " << Calculator::squareRoot(num1) << std::endl;

    return 0;
}
