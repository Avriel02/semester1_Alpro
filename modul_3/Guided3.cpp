#include <iostream>
using namespace std;
int main()
{
    const float k = 273, f = 32;
    int pilih;
    float celcius, hasil;
    cout << "\t\t"
         << "Konversi Suhu" << endl;
    cout << "\t"
         << "1. Celcius -> Reamur" << endl;
    cout << "\t"
         << "2. Celcius -> Kelvin" << endl;
    cout << "\t"
         << "3. Celcius -> Fahrenheit" << endl;
    cout << "\t"
         << "Masukkan pilihan : ";
    cin >> pilih;
    cout << endl
         << "Masukkan nilai Celcius : ";
    cin >> celcius;
    if (pilih == 1)
    {
        hasil = (float)4 / 5 * celcius;
    }
    if (pilih == 2)
    {
        hasil = (float)celcius + k;
    }
    if (pilih == 3)
    {
        hasil = (float)9 / 5 * celcius + f;
    }
    cout << "Hasil konversinya adalah : " << hasil << endl;
    return 0;
}
