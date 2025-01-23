#include <iostream>

using namespace std;

// Fungsi untuk mengonversi Fahrenheit ke Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
// Fungsi untuk mengonversi Kelvin ke Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}
// Fungsi untuk mengonversi Reamur ke Celsius
double reamurToCelsius(double reamur) {
    return reamur * 5.0 / 4.0;
}

int main() {
    // Contoh penggunaan konversi suhu
    double fahrenheit, kelvin, reamur;

    cout << "Masukkan suhu dalam Fahrenheit: ";
    cin >> fahrenheit;

    // Konversi Fahrenheit ke Celsius
    double celsiusFahrenheit = fahrenheitToCelsius(fahrenheit);
    cout << "Suhu dalam Celsius: " << celsiusFahrenheit << " C" << endl;

    cout << "\nMasukkan suhu dalam Kelvin: ";
    cin >> kelvin;

    // Konversi Kelvin ke Celsius
    double celsiusKelvin = kelvinToCelsius(kelvin);
    cout << "Suhu dalam Celsius: " << celsiusKelvin << " C" << endl;

    cout << "\nMasukkan suhu dalam Reamur: ";
    cin >> reamur;

    // Konversi Reamur ke Celsius
    double celsiusReamur = reamurToCelsius(reamur);
    cout << "Suhu dalam Celsius: " << celsiusReamur << " C" << endl;

    return 0;
}
