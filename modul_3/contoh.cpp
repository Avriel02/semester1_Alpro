#include <iostream>

// Konversi dari Fahrenheit ke Celsius
double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

// Konversi dari Kelvin ke Celsius
double kelvin_to_celsius(double kelvin) {
    double celsius = kelvin - 273.15;
    return celsius;
}

// Konversi dari Reamur ke Celsius
double reamur_to_celsius(double reamur) {
    double celsius = reamur * 5/4;
    return celsius;
}

int main() {
    double fahrenheit, kelvin, reamur;

    // Contoh penggunaan
    std::cout << "Masukkan suhu dalam Fahrenheit: ";
    std::cin >> fahrenheit;
    double celsius_from_fahrenheit = fahrenheit_to_celsius(fahrenheit);
    std::cout << fahrenheit << " Fahrenheit = " << celsius_from_fahrenheit << " Celsius" << std::endl;

    std::cout << "Masukkan suhu dalam Kelvin: ";
    std::cin >> kelvin;
    double celsius_from_kelvin = kelvin_to_celsius(kelvin);
    std::cout << kelvin << " Kelvin = " << celsius_from_kelvin << " Celsius" << std::endl;

    std::cout << "Masukkan suhu dalam Reamur: ";
    std::cin >> reamur;
    double celsius_from_reamur = reamur_to_celsius(reamur);
    std::cout << reamur << " Reamur = " << celsius_from_reamur << " Celsius" << std::endl;

    return 0;
}
